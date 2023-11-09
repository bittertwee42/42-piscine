/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:50:38 by fchieric          #+#    #+#             */
/*   Updated: 2023/11/05 22:25:19 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		check_all(int matrix[4][4], int loc, int input[16]);
int		len(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		*get_input(char *str);

int	check_dbl(int matrix[4][4], int loc, int skys)
{
	int	i;

	i = 0;
	while (i < loc / 4)
	{
		if (matrix[i][loc % 4] == skys)
			return (1);
		i++;
	}
	i = 0;
	while (i < loc % 4)
	{
		if (matrix[loc / 4][i] == skys)
			return (1);
		i++;
	}
	return (0);
}

void	display(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(matrix[i][j]);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	solve_matrix(int matrix[4][4], int input[16], int loc)
{
	int	skys;

	if (loc == 16)
	{
		display(matrix);
		return (1);
	}
	skys = 1;
	while (skys <= 4)
	{
		if (check_dbl(matrix, loc, skys) == 0)
		{
			matrix[loc / 4][loc % 4] = skys;
			if (check_all(matrix, loc, input) == 0)
			{
				if (solve_matrix(matrix, input, loc + 1) == 1)
					return (1);
			}
			else
				matrix[loc / 4][loc % 4] = 0;
		}
		skys++;
	}
	return (0);
}

int	error_manager(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (len(argv[1]) != 31)
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		*input;
	int		matrix[4][4];
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
	if (error_manager(argc, argv) == 1)
		return (0);
	input = get_input(argv[1]);
	if (solve_matrix(matrix, input, 0) == 0)
		display(matrix);
	else
		ft_putstr("Error\n");
	return (0);
}
