/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 08:15:16 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/18 11:08:25 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			**ft_tabdup(char **tab)
{
	char		**ret;
	size_t		len;
	size_t		i;

	ret = NULL;
	len = ft_tablen((char **)tab);
	if (len > 0)
	{
		if (!(ret = (char **)ft_memalloc(sizeof(char *) * (len + 1))))
			return (NULL);
		i = 0;
		while (i < len)
		{
			ret[i] = ft_strdup(tab[i]);
			i++;
		}
		ret[i] = NULL;
	}
	return (ret);
}
