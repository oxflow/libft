/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/01 00:16:37 by fdavid            #+#    #+#             */
/*   Updated: 2014/10/01 05:55:33 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putendc(char c)
{
	write(1, &c, 1);
	c = 10;
	write(1, &c, 1);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
