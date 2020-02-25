/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 16:47:35 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/16 17:35:55 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32000

typedef struct		s_read
{
	char			*start;
	char			*buf;
	int				fd;
	int				length;
	struct s_read	*next;
}					t_read;

int					get_next_line(int const fd, char **line);
char				*ft_read(t_read *buf);

#endif
