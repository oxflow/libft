/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 14:05:08 by fdavid            #+#    #+#             */
/*   Updated: 2016/02/07 16:17:10 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_H
# define DRAW_H
# define MLX_BIG_ENDIAN 1
# include <libft.h>
# include <mlx.h>

typedef unsigned int	t_uint32;

typedef struct			s_pos
{
	int					x;
	int					y;
}						t_pos;

typedef struct			s_image
{
	void				*img;
	char				*data;
	int					width;
	int					height;
	int					bpp;
	int					size_line;
	int					endian;
	int					color;
}						t_image;

typedef struct			s_mlx
{
	t_pos				size;
	void				*mlx;
	void				*win;
	t_image				*img;
}						t_mlx;

void					ft_destroy_image(t_image **image, void *mlx);
t_image					*ft_new_image(void *mlx, int width, int height);
void					img_pixel_put(t_mlx *mlx, t_pos pos);
void					drawline(t_pos start, t_pos end, t_mlx *mlx);
t_mlx					*mlx_start(int width, int height, char *title);

#endif
