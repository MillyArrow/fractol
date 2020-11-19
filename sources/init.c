/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrow <marrow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:33:45 by marrow            #+#    #+#             */
/*   Updated: 2020/11/19 09:19:29 by marrow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"


int					init_fractol(t_fractol *fractol)
{
	if (ft_strcmp("mandelbrot", fractol->name) == 0)
		return (mandelbrot(fractol));
	else
		terminate("ERROR");
	return (0);
};
}

t_image		*init_image(void *mlx_ptr)
{
	t_image	*image;

	if (!(image = (t_image *)ft_memalloc(sizeof(t_image))))
		error();
	if (!(image->img = mlx_new_image(mlx_ptr, WIDTH, HEIGHT)))
		error();
	image->data_addr = mlx_get_data_addr(image->img,
	&(image->bits_per_pixel), &(image->size_line), &(image->endian));
	return (image);
}

t_complex		init_complex(double re, double im)
{
	t_complex	complex;

	complex.re = re;
	complex.im = im;
	return (complex);
}

void			set_defaults(t_fractol *fractol)
{
	fractol->max_iteration = 50;
	fractol->min = init_complex(-2.0, -2.0);
	fractol->max.re = 2.0;
	fractol->max.im = fractol->min.im
		+ (fractol->max.re - fractol->min.re) * HEIGHT / WIDTH;
	fractol->k = init_complex(-0.4, 0.6);
	fractol->i1 = 0;
	fractol->i2 = 0;
	fractol->i3 = 0;
	fractol->had = 2.0;
}
