/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 06:59:53 by fdavid            #+#    #+#             */
/*   Updated: 2014/04/18 01:14:30 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*new;

	if ((new = (t_list *)ft_memalloc(content_size)) == NULL)
		return (NULL);
	if (content != NULL)
	{
		new->content = (void *)content;
		new->content_size = content_size;
	}
	else
	{
		new->content = NULL;
		new->content_size = 0;
	}
	new->next = NULL;
	return (new);
}
