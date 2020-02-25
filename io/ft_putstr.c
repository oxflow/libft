/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/01 00:17:04 by fdavid            #+#    #+#             */
/*   Updated: 2014/10/31 19:03:03 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_putendl(char *str)
{
	char	nl;

	write(1, str, ft_strlen(str));
	nl = 10;
	write(1, &nl, 1);
}

void		ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
