/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:32:15 by fchieric          #+#    #+#             */
/*   Updated: 2023/11/01 15:05:30 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	fine;
	int	temp;

	start = 0;
	fine = size - 1;
	while (start < fine)
	{
		temp = tab[start];
		tab[start] = tab[fine];
		tab[fine] = temp;
		start++;
		fine--;
	}
}
