/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/20 18:42:31 by fdavid            #+#    #+#             */
/*   Updated: 2014/09/25 10:41:14 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_realloc(void *ptr, size_t size)
{
	void	*newptr;
	size_t	len;

	if (!(newptr = ft_memalloc(size)))
		return (NULL);
	if (ptr != NULL)
	{
		len = ft_strlen((char *)ptr);
		if (size < len)
			len = size;
		ft_memcpy(newptr, ptr, len);
		free(ptr);
	}
	return (newptr);
}
