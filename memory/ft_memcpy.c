/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:22:24 by fdavid            #+#    #+#             */
/*   Updated: 2014/10/27 21:50:13 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	i = 0;
	ptr = (char *)dest;
	ptr2 = (char *)src;
	while (i < len)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dest);
}
