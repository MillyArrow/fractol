/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrow <marrow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:14:18 by marrow            #+#    #+#             */
/*   Updated: 2020/11/19 09:17:14 by marrow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include "libft.h"
# include "ft_printf.h"
# include <stdlib.h>
# include <stdbool.h>
# include <math.h>
# include <pthread.h>
# define HEIGHT 1000
# define WIDTH 1000
# define MAIN_PAD_ESC		53
# define MAIN_PAD_PLUS		24
# define MAIN_PAD_MINUS		27
typedef struct         s_image
{
    void               *img;
    char               *data_addr;
    int		    	    bits_per_pixel;
	int			    	size_line;
	int			    	endian;
}                       t_image;

typedef struct	    	s_complex
{
	double		    	re;
	double		    	im;
}				    	t_complex;

typedef struct         s_fractol
{
    char                *name;
    void                *mlx_ptr;
    void                *win_ptr;
    int                 max_iter;
    t_image             *image;
    int                 max_iteration;
    t_complex           min;
    t_complex           max;
    t_complex		c;
    t_complex           k;
    int           i1;
    int           i2;
    int           i3;
    double             had;
    int				start_line;
	int				finish_line;
    double          zn;

}                       t_fractol;

void		            init_fractol(t_fractol *fractol);
void		            error();
t_image		            *init_image(void *mlx_ptr);
t_complex	        	init_complex(double re, double im);
void			        set_defaults(t_fractol *fractol);
#endif
