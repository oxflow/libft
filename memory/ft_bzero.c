/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 07:09:16 by fdavid            #+#    #+#             */
/*   Updated: 2014/11/18 07:10:40 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void		ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*a;

	i = 0;
	a = (char *)s;
	while (i < n)
		a[i++] = 0;
}