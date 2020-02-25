/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendlnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/06/26 18:32:12 by fdavid            #+#    #+#             */
/*   Updated: 2014/06/26 18:32:46 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_putendlnbr(int n)
{
	ft_putnbr(n);
	ft_putchar('\n');
}