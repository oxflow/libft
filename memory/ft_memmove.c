/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:08:22 by fdavid            #+#    #+#             */
/*   Updated: 2014/10/03 06:42:06 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;
	char	*temp;

	if (!(temp = ft_strnew(len)))
		return (NULL);
	i = -1;
	ptr = (char *)dest;
	ptr2 = (char *)src;
	while (i < len)
		temp[i] = ptr2[i];
	i = -1;
	while (i < len)
		ptr[i] = temp[i];
	free(temp);
	return (dest);
}
