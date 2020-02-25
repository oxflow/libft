/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:29:43 by fdavid            #+#    #+#             */
/*   Updated: 2015/06/28 20:59:15 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int			ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	if (s1 == NULL && s2 == NULL)
		return (0);
	else if (s1 == NULL)
		return (-s2[0]);
	else if (s2 == NULL)
		return (s1[0]);
	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
