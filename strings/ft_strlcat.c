/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:20:03 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/02 18:21:16 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t		ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	size;
	int		start;

	i = 0;
	start = ft_strlen(dest);
	size = len - start - 1;
	while (src[i] != '\0' && i < size && i <= sizeof(dest))
	{
		dest[start + i] = src[i];
		i++;
	}
	if (i < size && i <= sizeof(dest))
		dest[start + i] = '\0';
	return (start + i);
}
