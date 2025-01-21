/*#include "includes/test.h"

int	main(void)
{
	void	*mlx;

	mlx = mlx_init();
}*/
/*#include "includes/test.h"

int	main(void)
{
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1366, 768, "So_long");
	mlx_loop(mlx);
}*/
/*#include "includes/test.h"

int	main(void)
{
	void	*img;
	void	*mlx;

	mlx = mlx_init();
	img = mlx_new_image(mlx, 1920, 1080);
}*/
/*#include "includes/test.h"

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main(void)
{
	void	*mlx;
	t_data	img;

	mlx = mlx_init();
	img.img = mlx_new_image(mlx, 1920, 1080);

	
	// After creating an image, we can call `mlx_get_data_addr`, we pass
	// `bits_per_pixel`, `line_length`, and `endian` by reference. These will
	//then be set accordingly for the *current* data address.
	
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
}*/

/*#include "includes/test.h"

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	int		x;
	int		y;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1000, 600, "So_long");
	img.img = mlx_new_image(mlx, 1000, 600);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);*/
	/*my_mlx_pixel_put(&img, 5, 5, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 5, 6, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 5, 7, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 5, 8, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 5, 9, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 5, 10, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 6, 10, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 7, 10, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 8, 10, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 9, 10, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 6, 5, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 7, 5, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 8, 5, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 9, 5, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 10, 5, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 10, 6, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 10, 7, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 10, 8, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 10, 9, 0x00FFFFFF);
	my_mlx_pixel_put(&img, 10, 10, 0x00FFFFFF);*/
	
	//modele: my_mlx_pixel_put(&img, x, y, 0x00FFFFFF);
	
	/*diagonale: '\'
	x = 10;
	y = 10;
	while(x <= 100 && y <= 100)
		{
			my_mlx_pixel_put(&img, x, y, 0x00FFFFFF);
			x++;
			y++;
		}
	*/

	/*diagonale: '/'
	x = 100;
	y = 10;
	while(x >= 10 && y <= 100)
		{
			my_mlx_pixel_put(&img, x, y, 0x00FFFFFF);
			x--;
			y++;
		}*/

	/*horizontal 
	x = 10;
	y = 10;
	while(x <= 100)
		{
			my_mlx_pixel_put(&img, x, y, 0x00FFFFFF);
			x++;
		}*/

	/*verticale
	x = 10;
	y = 10;
	while(y <= 100)
		{
			my_mlx_pixel_put(&img, x, y, 0x00FFFFFF);
			y++;
		}*/
	
	/*remplissage carre
	x = 10;
	y = 10;
	while (x <= 100)
    {
        while(y <= 100)
        {
        	my_mlx_pixel_put(&img, x, y, 0x00FFFFFF);
        	y++;
        }
    y = 10;
    x++;
    }
	*/
	/*mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}*/

#include "includes/test.h"

#define ESC = 53

typedef struct s_vars{
    void    *mlx;
    void    *win;
}t_vars;

int quit(int keycode, t_vars *vars)
    {
        if (keycode == ESC)
        {
            mlx_destroy_window(vars->mlx, vars->win);
            free(vars);
            exit();
        }
    }

int main()
{
    t_vars  *vars;

    vars = NULL;
    vars = malloc(sizeof(t_vars));

    vars->mlx = mlx_init();
    vars->win = mlx_new_window(vars->mlx, 1920 , 1080 , "HELLO");

    mlx_hook(vars->win, 2, 0, quit, vars);
    mlx_loop(vars->mlx);
}
