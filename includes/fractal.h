/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrow <marrow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:14:18 by marrow            #+#    #+#             */
/*   Updated: 2020/11/17 16:26:42 by marrow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTAL_H
# define FRACTAL_H

# include <mlx.h>
# include "libft.h"
# include <stdlib.h>
# include <stdbool.h>
# include <math.h>
# define HEIGHT 800
# define WIDTH 600

typedef struct      s_fractol
{
    char            *name;
    void            *mlx_ptr;
    void            *win_ptr;
}                   t_fractol;


#endif
