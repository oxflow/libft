/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 13:24:45 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/17 17:42:12 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char			*ft_concatenate(t_read *buf)
{
	char			*line;
	char			*read;
	char			*next;

	line = ft_strsub(buf->start, 0, ft_strlen(buf->start));
	buf->start = NULL;
	read = ft_read(buf);
	if (buf->length == 0)
	{
		ft_strdel(&read);
		return (line);
	}
	next = ft_strjoin(line, read);
	ft_strdel(&line);
	ft_strdel(&read);
	return (next);
}

char				*ft_read(t_read *buf)
{
	char			*line;
	char			*next;

	next = NULL;
	if (buf->start == NULL)
	{
		ft_strclr(buf->buf);
		buf->length = read(buf->fd, buf->buf, BUFF_SIZE);
		if (buf->length < 0)
			return (NULL);
		buf->start = buf->buf;
		if (buf->length == 0)
			return (NULL);
	}
	if ((next = ft_strchr(buf->start, '\n')) != NULL)
	{
		line = ft_strsub(buf->start, 0, next - buf->start);
		buf->start = next + 1;
		return (line);
	}
	else
		return (ft_concatenate(buf));
	return (next);
}

static t_read		*get_buf_fd(int fd, t_read **list)
{
	t_read			*tmp;
	t_read			*ret;

	tmp = *list;
	while (tmp != NULL)
	{
		if (tmp->fd == fd)
			return (tmp);
		ret = tmp;
		tmp = tmp->next;
	}
	if (!(tmp = (t_read *)malloc(sizeof(t_read))))
		return (NULL);
	if (*list)
		ret->next = tmp;
	else
		*list = tmp;
	if (!(tmp->buf = ft_strnew(BUFF_SIZE)))
		return (NULL);
	tmp->start = NULL;
	tmp->fd = fd;
	tmp->length = 0;
	tmp->next = NULL;
	return (tmp);
}

static void			del_lst_fd(t_read **list)
{
	t_read			*tmp;

	while (*list)
	{
		tmp = *list;
		*list = (*list)->next;
		ft_strdel(&tmp->buf);
		tmp->start = NULL;
		ft_memdel((void **)&tmp);
	}
}

int					get_next_line(int const fd, char **line)
{
	static t_read	*list = NULL;
	t_read			*buf;

	if (!line)
		return (-1);
	*line = NULL;
	if (fd == -1 && line == NULL)
	{
		del_lst_fd(&list);
		return (0);
	}
	if (!(buf = get_buf_fd(fd, &list)))
		return (-1);
	if ((*line = ft_read(buf)) != NULL)
	{
		if (buf->length == 0 && ft_strlen(*line) == 0)
			return (0);
		return (1);
	}
	if (buf->length == -1)
		return (-1);
	return (0);
}
