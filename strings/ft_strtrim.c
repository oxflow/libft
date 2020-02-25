/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/02 20:44:31 by fdavid            #+#    #+#             */
/*   Updated: 2015/06/28 20:33:00 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_strtrim(char *str)
{
	size_t		i;
	size_t		j;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		i++;
	j = ft_strlen(str) - 1;
	while (j > 0 && (str[j] == ' ' || str[j] == '\t' || str[j] == '\n'))
		j--;
	return (ft_strsub(str, i, j - i + 1));
}
