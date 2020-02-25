/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 15:40:42 by fdavid            #+#    #+#             */
/*   Updated: 2014/11/18 07:52:10 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		i;
	int		length;

	length = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = ft_strnew(length);
	i = 0;
	while (i < length)
	{
		if (s1 && *s1)
			str[i] = *s1++;
		else
			str[i] = *s2++;
		i++;
	}
	return (str);
}
