/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 06:36:42 by fdavid            #+#    #+#             */
/*   Updated: 2015/04/08 06:37:59 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				**ft_tabnew(size_t size)
{
	char			**tab;

	size++;
	if (!(tab = (char **)malloc(sizeof(char *) * size)))
		return (NULL);
	ft_bzero((void *)tab, size);
	return (tab);
}
