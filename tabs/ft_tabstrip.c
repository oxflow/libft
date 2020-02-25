/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabstrip.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 17:33:32 by fdavid            #+#    #+#             */
/*   Updated: 2015/06/25 17:34:33 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char						**ft_tabstrip(char **tab, int len)
{
	int						i;
	char					**ret;

	if (!tab)
		return (NULL);
	if (!(ret = ft_tabnew(len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		ret[i] = ft_strdup(tab[i]);
		i++;
	}
	return (ret);
}
