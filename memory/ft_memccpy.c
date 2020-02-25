/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:40:21 by fdavid            #+#    #+#             */
/*   Updated: 2014/04/15 20:17:47 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	size_t		i;
	char		*ptr;
	const char	*ptr2;

	i = 0;
	ptr = (char *)dest;
	ptr2 = (char *)src;
	while (len > 0)
	{
		ptr[i] = ptr2[i];
		if (ptr2[i] == c)
			return (ptr + i + 1);
		i++;
		len--;
	}
	return (NULL);
}
