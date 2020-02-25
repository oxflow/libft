/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/25 07:24:36 by fdavid            #+#    #+#             */
/*   Updated: 2014/12/12 23:01:40 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_strdup(const char *str)
{
	int			i;
	char		*p;
	size_t		len;

	if (str != NULL && (len = ft_strlen(str)) > 0)
	{
		if (!(p = ft_strnew(len)))
			return (NULL);
		i = 0;
		while (str[i] != '\0')
		{
			p[i] = str[i];
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}
