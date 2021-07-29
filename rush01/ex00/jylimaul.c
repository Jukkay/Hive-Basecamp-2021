/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jylimaul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 06:41:30 by jylimaul          #+#    #+#             */
/*   Updated: 2021/07/18 17:12:30 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
char **read_input(int argc, char **argv);
void print_solution(char **src);
char **build_table(void);
char **copy_table(char **src);
void check_grids(char **src, char **wt, char c);
int find_char(char c, int y1, int x1, char **wt);
void elim_grid_and_xy(char c, int y1, int x1, char **src, char **wt);
void eliminate_grid(int y1, int x1, char **wt);
void eliminate_xy(int y, int x, char **wt);
char *find_coordinate(char c, int y1, int x1, char **scr);
void insert_num(char **src, char c, int y1, int x1);
char *check_dots(char **wt, int y1, int x1);

void	**sudoku(int argc, char **argv)
{
	char **src;
	char **wt;
	char c;

	c = '1';
	src = read_input(argc, argv);
	wt = copy_table(src);
	print_solution(src);
	ft_putchar('\n');
	check_grids(src, wt, c);
	print_solution(wt);
	ft_putchar('\n');
	print_solution(src);
	return(0);
}

char **copy_table(char **src)
{
	int y;
	int x;
	char *string;
	char **copy;
	
	y = 0;
	copy = build_table();
	while (y <= 9)
	{
		x = 0;
		string = src[y];
		while (string[x] != '\0')
		{
			copy[y][x] = string[x];
			x++;
		}
		y++;
	}
	return(copy);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void check_grids(char **src, char **wt, char c)
{
	if (find_char(c, 1, 0, src))
		elim_grid_and_xy(c, 1, 0, src, wt);
	if (find_char(c, 1, 3, src))
		elim_grid_and_xy(c, 1, 3, src, wt);
	if (find_char(c, 1, 6, src))
		elim_grid_and_xy(c, 1, 6, src, wt);
	if (find_char(c, 4, 0, src))
		elim_grid_and_xy(c, 4, 0, src, wt);
	if (find_char(c, 4, 3, src))
		elim_grid_and_xy(c, 4, 3, src, wt);
	if (find_char(c, 4, 6, src))
		elim_grid_and_xy(c, 4, 6, src, wt);
	if (find_char(c, 7, 0, src))
		elim_grid_and_xy(c, 7, 0, src, wt);
	if (find_char(c, 7, 3, src))
		elim_grid_and_xy(c, 7, 3, src, wt);
	if (find_char(c, 7, 6, src))
		elim_grid_and_xy(c, 7, 6, src, wt);
}

int find_char(char c, int y1, int x1, char **src)
{
	int xtemp;

	xtemp = x1;
	while (y1 <= (y1 + 2))
	{
		x1 = xtemp;
		while (x1 <= (x1 + 2))
		{
			if (src[y1][x1] == c)
			{
				return(1);
			}
			x1++;
		}
		y1++;
	}
	return(0);
}

char *find_coordinate(char c, int y1, int x1, char **src)
{
	char *yx;
	int xtemp;
	// int x2;
	
	xtemp = x1;
	// x2 = x1 + 2;
	yx = (char *)malloc(3 * sizeof(char));
	while (y1 <= (y1 + 2))
	{
		while (x1 <= (x1 + 2))
		{
			if (src[y1][x1] == c)
			{
				yx[0] = y1 + '0';
				yx[1] = x1 + '0';
				yx[2] = '\0';
				return (yx);
			}
			x1++;
		}
		x1 = xtemp;
		y1++;
	}
	return(0);
}

void eliminate_grid(int y1, int x1, char **wt)
{
	int xtemp;
	// int x2;

	xtemp = x1;
	// x2 = x1 + 2;
	while (y1 <= (y1 + 2) && y1 <= 9)
	{
		x1 = xtemp;
		while (x1 <= (x1 + 2) && wt[y1][x1] != '\0')
		{
			// wt[y1][x1] = 'x';  // seg fault, jos yrittää kirjoittaa.
			x1++;
		}
		y1++;
	}
}

void eliminate_xy(int y, int x, char **wt)
{
	int xtemp;

	xtemp = x;
	x = 0;
	while (x < 9)
		{
			wt[y][x] = 'x';
			x++;
		}
	y = 1;
	while (y < 10)
	{
		wt[y][xtemp] = 'x';
		y++;
	}
}

void elim_grid_and_xy(char c, int y1, int x1, char **src, char **wt)
{
	char *yx;
	int x;
	int y;
	
	yx = find_coordinate(c, y1, x1, src);
	eliminate_grid(y1, x1, wt);
	y = yx[0] - '0';
	x = yx[1] - '0';
	eliminate_xy(y, x, wt);
	yx = NULL;
	yx = check_dots(wt, y1, x1);
	if (check_dots(wt, y1, x1) != NULL)
	{
		y = yx[0] - '0';
		x = yx[1] - '0';
		insert_num(src, c, y, x);
	}
	
}

void insert_num(char **src, char c, int y1, int x1)
{
	src[y1][x1] = c;
}

char *check_dots(char **wt, int y1, int x1)
{
	int dots;
	char *yx;

	yx = (char *)malloc(3 * sizeof(char));
	dots = 0;
	while (y1 <= (y1 + 2))
	{
		while (x1 <= (x1 + 2))
		{
			if (wt[y1][x1] == '.')
			{
				dots++;
				if (dots > 1)
					return (0);
				yx[0] = y1;
				yx[1] = x1;
			}
			x1++;
		}
		y1++;
	}
	return(yx);
}

char **read_input(int argc, char **argv)
{
	char **src;
	char *string;
	int		x;
	int		y;
	
	src = build_table();
	y = 1;
	while (y < argc)
	{
		x = 0;
		string = argv[y];
		while (string[x] != '\0')
		{
			src[y][x] = string[x];
			x++;
		}
		y++;
	}
	return(src);
}
char **build_table(void)
{
	char **src;
	int		y;
	
	y = 0;	
	src = (char**)malloc(10*sizeof(char *));
    while (y <= 10)
    {
        src[y] = (char*)malloc(10*sizeof(char));
		y++;
	}
	return(src);
}

void print_solution(char **src)
{
	int y;
	int x;
	char c;

	y = 1;
	while (y < 10)
	{
		x = 0;
		while (x < 9)
		{
			c = src[y][x];
			ft_putchar(c);
			ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

int		main(int argc, char **argv)
{

	sudoku(argc, argv);
	//print_solution(arr);
	
	return(0);
}
