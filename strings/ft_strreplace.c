/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 18:36:51 by fdavid            #+#    #+#             */
/*   Updated: 2014/12/08 22:11:55 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_strreplace(char *find, char *rep, char *str)
{
	char			*new;
	size_t			len;
	size_t			i;

	if (!find)
		return (NULL);
	i = 0;
	len = ft_strlen(str);
	while (i < len && str[i] != find[0])
		i++;
	if (i == len || ft_strncmp(str + i, find, ft_strlen(find) - 1))
		return (NULL);
	len = ft_strlen(str) - ft_strlen(find) + ft_strlen(rep);
	if (!(new = ft_strnew(len)))
		return (NULL);
	len = ft_strlen(rep);
	ft_memcpy(new, str, i);
	ft_memcpy(new + i, rep, len);
	ft_memcpy(new + i + len, str + i + ft_strlen(find), \
			ft_strlen(str) - i - ft_strlen(find));
	return (new);
}
