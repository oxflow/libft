/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/20 05:25:17 by fdavid            #+#    #+#             */
/*   Updated: 2014/10/27 22:35:20 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char	ft_compare(int *a, int *b)
{
	int		tmp;

	if (*a > *b)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
		return (0);
	}
	return (1);
}

void		ft_bubble_int(int *tab, int size, char reverse)
{
	int		i;
	char	stop;

	stop = 0;
	while (!stop)
	{
		i = 0;
		stop = 1;
		while (i + 1 < size)
		{
			if (reverse)
				stop = (!ft_compare(&tab[i + 1], &tab[i])) ? 0 : stop;
			else
				stop = (!ft_compare(&tab[i], &tab[i + 1])) ? 0 : stop;
			i++;
		}
	}
}
