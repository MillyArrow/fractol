/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fractol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrow <marrow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:33:45 by marrow            #+#    #+#             */
/*   Updated: 2020/11/17 14:47:33 by marrow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		init_fractal(t_fractal *fractal, char *name)
{
	fractal->mlx_ptr = NULL;
	fractal->name = name;
	fractal->win_ptr = NULL;
}
