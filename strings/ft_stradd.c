/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/01 03:08:00 by fdavid            #+#    #+#             */
/*   Updated: 2014/09/25 11:38:38 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_stradd(char *s1, char const *s2)
{
	char	*ret;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(ret = (char *)ft_memalloc(sizeof(char) * len)))
		return (NULL);
	len = ft_strlen(s1);
	if (s1 != NULL)
	{
		ft_strcpy(ret, s1);
		ft_strdel(&s1);
	}
	i = 0;
	while (s2[i] != '\0')
	{
		ret[len] = s2[i];
		len++;
		i++;
	}
	ret[len] = '\0';
	return (ret);
}
