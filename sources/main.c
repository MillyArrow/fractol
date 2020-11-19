#include "fractol.h"

static void	help()
{
	ft_printf("Usage: ./fractol [fractal set]\n");
	ft_printf("Fractal sets:\n");
	ft_printf("mandelbrot or m\n");
	ft_printf("julia or j\n");
}

void		error()
{
	ft_putendl_fd("Error", 2);
	exit(0);
}

int			ft_close(void *p)
{
	p = NULL;
	exit(0);
}

int			key_press(int key, t_fractol *fractol)
{
	if (key == MAIN_PAD_ESC)
		exit(0);
	if (key == MAIN_PAD_PLUS && fractol->max_iteration < 1000)
		fractol->max_iteration += 2;
	else if (key == MAIN_PAD_MINUS && fractol->max_iteration > 1)
		fractol->max_iteration -= 2;
	return (0);
}
static void solve(char *name)
{
	t_fractol *fractol;
	if (!(fractol = ft_memalloc(sizeof(t_fractol))))
		error();
	fractol->name = name;
	init_fractol(fractol);
	if (!(fractol->mlx_ptr = mlx_init()))
		error();
	if (!(fractol->win_ptr = mlx_new_window(fractol->mlx_ptr, WIDTH, HEIGHT,
	fractol->name)))
		error();
	fractol->image = init_image(fractol->mlx_ptr);
	set_defaults(fractol);
	mlx_hook(fractol->win_ptr, 2, 0, key_press, fractol);
	mlx_hook(fractol->win_ptr, 17,0,ft_close, fractol);

	mlx_loop(fractol->mlx_ptr);



}

int		main(int argc, char **argv)
{
	if (argc != 2)
		help();
	else
		solve(argv[1]);
	return (0);
}
