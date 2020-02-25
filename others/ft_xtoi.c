/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 00:40:33 by fdavid            #+#    #+#             */
/*   Updated: 2016/02/19 02:13:59 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int				count_size(char *str)
{
	int					i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'A' && str[i] <= 'F')
			|| (str[i] >= 'a' && str[i] <= 'f'))
		{
			i++;
			continue ;
		}
		break ;
	}
	return (i);
}

int						ft_xtoi(char *str)
{
	int					nbr;
	size_t				i;
	int					j;

	nbr = 0;
	i = 0;
	j = count_size(str) - 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			nbr += (str[i] - 48) * ft_power(16, j);
		else if (str[i] >= 'A' && str[i] <= 'F')
			nbr += (str[i] - 55) * ft_power(16, j);
		else if (str[i] >= 'a' && str[i] <= 'f')
			nbr += (str[i] - 87) * ft_power(16, j);
		else
			break ;
		i++;
		j--;
	}
	return (nbr);
}
