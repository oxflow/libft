/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbubble.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/02 23:33:52 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/02 23:48:23 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			ft_lstbubble(t_list **list, int (*f)(void *, void *))
{
	t_list		*pre;
	t_list		*tmp;

	pre = NULL;
	tmp = *list;
	while (tmp->next != NULL)
	{
		if (f(tmp->content, tmp->next->content) > 0)
		{
			if (pre)
				pre->next = tmp->next;
			else
				*list = tmp->next;
			tmp->next = tmp->next->next;
			tmp->next->next = tmp;
			pre = NULL;
			tmp = *list;
		}
		pre = tmp;
		tmp = tmp->next;
	}
}
