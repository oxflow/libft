/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 23:21:45 by fdavid            #+#    #+#             */
/*   Updated: 2014/11/18 07:57:48 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strsub(char const *s1, size_t start, size_t n)
{
	size_t	compt;
	int		size;
	char	*s2;

	if (!(s2 = ft_strnew(n)))
		return (NULL);
	compt = 0;
	size = ft_strlen(s1) - start;
	while (compt < n && (int)compt < size)
	{
		s2[compt] = s1[start + compt];
		compt++;
	}
	s2[n] = '\0';
	return (s2);
}
