/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 07:16:28 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/02 17:48:14 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*newlst;
	t_list	*tmp;

	tmp = NULL;
	while (lst != NULL)
	{
		newlst = ft_lstnew(lst->content, lst->content_size);
		newlst = f(lst);
		if (tmp != NULL)
			tmp->next = newlst;
		else
			ret = newlst;
		lst = lst->next;
		tmp = newlst;
	}
	tmp->next = NULL;
	return (ret);
}
