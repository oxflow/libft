/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 17:06:58 by fdavid            #+#    #+#             */
/*   Updated: 2015/06/28 22:40:17 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int						ft_tabfstr(char **tab, char *str)
{
	int					i;

	i = 0;
	if (tab == NULL)
		return (-1);
	while (tab[i] != NULL)
	{
		if (!ft_strcmp(tab[i], str))
			return (i);
		i++;
	}
	return (-1);
}
