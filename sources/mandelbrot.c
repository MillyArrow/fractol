/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrow <marrow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:27:29 by marrow            #+#    #+#             */
/*   Updated: 2020/11/19 09:17:03 by marrow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int					mandelbrot(t_fractol *fractol)
{
	t_complex		z;
	int				iteration;

	z = init_complex(fractol->c.re, fractol->c.im);
	iteration = 0;
	while (iteration < fractol->max_iteration
		&& pow(z.re, 2.0) + pow(z.im, 2.0) <= 4)
	{
		z = init_complex(
			pow(z.re, 2.0) - pow(z.im, 2.0) + fractol->c.re,
			fractol->had * z.re * z.im + fractol->c.im);
		fractol->zn = sqrt(z.re * z.re + z.im * z.im);
		iteration++;
	}
	return (iteration);
	return (0);
}
