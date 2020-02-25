/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 07:24:10 by fdavid            #+#    #+#             */
/*   Updated: 2014/11/18 08:21:02 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_tablen(char **tab)
{
	size_t	i;

	i = 0;
	if (tab)
		while (tab[i] != NULL)
			i++;
	return (i);
}