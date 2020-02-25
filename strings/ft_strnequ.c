/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 22:27:21 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/02 18:32:49 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0' && count < n)
	{
		if (s1[count] != s2[count])
			return (0);
		count++;
	}
	if (s1[count] != s2[count])
		return (0);
	return (1);
}
