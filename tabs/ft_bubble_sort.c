/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/03 08:04:42 by fdavid            #+#    #+#             */
/*   Updated: 2015/02/10 20:33:44 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char	ft_compare(char **a, char **b)
{
	char	*tmp;

	if (ft_strcmp(*a, *b) > 0)
	{
		tmp = ft_strdup(*a);
		ft_strdel(a);
		*a = ft_strdup(*b);
		ft_strdel(b);
		*b = ft_strdup(tmp);
		ft_strdel(&tmp);
		return (0);
	}
	return (1);
}

void		ft_bubble_str(char **tab, char reverse)
{
	int		i;
	int		len;
	char	over;

	over = 0;
	len = ft_tablen(tab);
	while (!over)
	{
		i = 0;
		over = 1;
		while (i + 1 < len)
		{
			if (reverse)
				over = (!ft_compare(&tab[i + 1], &tab[i])) ? 0 : over;
			else
				over = (!ft_compare(&tab[i], &tab[i + 1])) ? 0 : over;
			i++;
		}
	}
}
