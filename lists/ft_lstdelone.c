/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 07:04:27 by fdavid            #+#    #+#             */
/*   Updated: 2014/04/19 22:13:36 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del(*alst, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
