/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:50:19 by fdavid            #+#    #+#             */
/*   Updated: 2014/04/17 00:50:15 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int				ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t		i;
	const char	*mem1;
	const char	*mem2;

	i = 0;
	mem1 = (char *)s1;
	mem2 = (char *)s2;
	while (mem1[i] == mem2[i] && i < len)
		i++;
	return ((int)mem1[i] - mem2[i]);
}
