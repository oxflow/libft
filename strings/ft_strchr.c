/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:15:06 by fdavid            #+#    #+#             */
/*   Updated: 2015/01/29 14:55:18 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == 0)
		return (s);
	return (NULL);
}

char	*ft_strnchr(char *s, int c, int i)
{
	while (s[i] != '\0')
		if (s[i++] == c)
			return ((char *)&s[i]);
	if (c == 0)
		return (s);
	return (NULL);
}
