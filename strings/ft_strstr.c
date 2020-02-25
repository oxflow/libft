/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:21:34 by fdavid            #+#    #+#             */
/*   Updated: 2014/04/17 05:40:52 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strstr(const char *meule, const char *aiguille)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (meule[i] != '\0')
	{
		if (meule[i] == aiguille[j])
			j++;
		else if (meule[i] != aiguille[j])
			j = 0;
		if (j == ft_strlen(aiguille))
			return ((char *)(meule + i - j));
		i++;
	}
	return (NULL);
}
