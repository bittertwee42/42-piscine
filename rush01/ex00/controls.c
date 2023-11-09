/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:52:56 by fchieric          #+#    #+#             */
/*   Updated: 2023/11/05 21:22:07 by aanghi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_colup(int matrix[4][4], int loc, int input[16])
{
	int	i;
	int	limit;
	int	j;

	i = 0;
	limit = 0;
	j = 0;
	if (loc / 4 == 3)
	{
		while (i < 4)
		{
			if (matrix[i][loc % 4] > limit)
			{
				limit = matrix[i][loc % 4];
				j++;
			}
			i++;
		}
		if (input[loc % 4] != j)
			return (1);
	}
	return (0);
}

int	check_rowr(int matrix[4][4], int loc, int input[16])
{
	int	i;
	int	limit_size;
	int	visible_towers;

	i = 4;
	limit_size = 0;
	visible_towers = 0;
	if (loc % 4 == 3)
	{
		while (--i >= 0)
		{
			if (matrix[loc / 4][i] > limit_size)
			{
				limit_size = matrix[loc / 4][i];
				visible_towers++;
			}
		}
		if (input[12 + loc / 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_coldw(int matrix[4][4], int loc, int input[16])
{
	int	i;
	int	limit;
	int	j;

	i = 3;
	limit = 0;
	j = 0;
	if (loc / 4 == 3)
	{
		while (i >= 0)
		{
			if (matrix[i][loc % 4] > limit)
			{
				limit = matrix[i][loc % 4];
				j++;
			}
			i--;
		}
		if (input[4 + loc % 4] != j)
			return (1);
	}
	return (0);
}

int	check_rowl(int matrix[4][4], int loc, int input[16])
{
	int	i;
	int	limit;
	int	j;

	i = 0;
	limit = 0;
	j = 0;
	if (loc % 4 == 3)
	{
		while (i < 4)
		{
			if (matrix[loc / 4][i] > limit)
			{
				limit = matrix[loc / 4][i];
				j++;
			}
			i++;
		}
		if (input[8 + loc / 4] != j)
			return (1);
	}
	return (0);
}

int	check_all(int matrix[4][4], int loc, int input[16])
{
	if (check_rowl(matrix, loc, input) == 1)
		return (1);
	if (check_rowr(matrix, loc, input) == 1)
		return (1);
	if (check_coldw(matrix, loc, input) == 1)
		return (1);
	if (check_colup(matrix, loc, input) == 1)
		return (1);
	return (0);
}
