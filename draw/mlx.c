/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 15:28:57 by fdavid            #+#    #+#             */
/*   Updated: 2016/02/07 16:14:41 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <draw.h>

t_mlx				*mlx_start(int width, int height, char *title)
{
	t_mlx			*mlx;

	if (!(mlx = (t_mlx *) malloc(sizeof(t_mlx))))
		return (NULL);
	if (!(mlx->mlx = mlx_init()))
	{
		free(mlx);
		return (NULL);
	}
	if (!(mlx->win = mlx_new_window(mlx->mlx, width, height, title)))
	{
		free(mlx->mlx);
		free(mlx);
		return (NULL);
	}
	mlx->size.x = width;
	mlx->size.y = height;
	mlx->img = ft_new_image(mlx->mlx, width, height);
	return (mlx);
}
