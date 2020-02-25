/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 07:38:06 by fdavid            #+#    #+#             */
/*   Updated: 2014/11/18 08:21:47 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_tabdel(char ***tab)
{
	size_t	i;
	size_t	mx;
	char	*tmp;

	if (*tab)
	{
		i = 0;
		mx = ft_tablen(*tab);
		while (i < mx)
		{
			tmp = (*tab)[i];
			free(tmp);
			i++;
		}
		free(*tab);
	}
	*tab = NULL;
}
