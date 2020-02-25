/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushback_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/02 22:14:30 by fdavid            #+#    #+#             */
/*   Updated: 2014/11/02 22:30:04 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			ft_pushback_tab(char *item, char ***tab)
{
	char		**new;
	int			size;
	int			i;

	if (*tab)
	{
		size = ft_tablen(*tab);
		new = (char **)ft_memalloc(sizeof(char *) * (size + 2));
		if (new)
		{
			i = 0;
			while (i < size)
			{
				new[i] = ft_strdup((*tab)[i]);
				i++;
			}
			new[i] = ft_strdup(item);
			new[i + 1] = NULL;
			ft_tabdel(tab);
			*tab = new;
		}
	}
}
