/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 17:28:58 by fdavid            #+#    #+#             */
/*   Updated: 2015/06/25 17:34:47 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char						**ft_subtab(char **tab, int start, int len)
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
		ret[i] = ft_strdup(tab[i + start]);
		i++;
	}
	return (ret);
}
