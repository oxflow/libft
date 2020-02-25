/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 07:44:03 by fdavid            #+#    #+#             */
/*   Updated: 2014/11/18 08:16:24 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnew(size_t size)
{
	char	*str;

	size++;
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
