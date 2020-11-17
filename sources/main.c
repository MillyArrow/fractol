#include "fractol.h"

static void	help()
{
	ft_printf("Usage: ./fractol [fractal set]\n");
	ft_printf("Fractal sets:\n");
	ft_printf("mandelbrot");
	ft_printf("julia");
}

void		error()
{
	ft_putendl_fd("Error", 2);
	exit(0);
}

static void solve(char *name)
{
	t_fractal *fractal;
	if (!(fractal = ft_memalloc(sizeof(t_fractal))))
		error();
	init_fractal(fractal, name);
	if (!(fractal->mlx_ptr = mlx_init()))
		error();
	if (!(fractal->win_ptr = mlx_new_window(fractal->mlx_ptr, WIDTH, HEIGHT,
	fractal->name)))
		error();
	

}

int		main(int argc, char **argv)
{
	if (argc == 1)
		help();
	else if (argc == 2)
		solve(argv[1]);
	return (0);
}
