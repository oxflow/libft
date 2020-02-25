/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:21:34 by fdavid            #+#    #+#             */
/*   Updated: 2014/04/18 06:45:21 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (big[i] != '\0' && i < n)
	{
		if (big[i] == little[j])
			j++;
		else if (big[i] != little[j])
			j = 0;
		if (j == ft_strlen(little))
			return ((char *)(big + i - j));
		i++;
	}
	return (NULL);
}
