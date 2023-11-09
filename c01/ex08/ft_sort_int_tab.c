/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:48:42 by fchieric          #+#    #+#             */
/*   Updated: 2023/11/01 17:45:42 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	inizio;
	int	fine;
	int	temp;

	inizio = 0;
	fine = size - 1;
	while (inizio < fine)
	{
		if (tab[inizio] > tab[inizio + 1])
		{
			temp = tab[inizio];
			tab[inizio] = tab[inizio + 1];
			tab[inizio + 1] = temp;
			inizio = 0;
		}
		else
		{
			inizio++;
		}
	}
}
