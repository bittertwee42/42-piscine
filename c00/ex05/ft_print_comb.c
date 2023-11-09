/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:21:52 by fchieric          #+#    #+#             */
/*   Updated: 2023/10/30 13:34:57 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fine(char d)
{
	if (d != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = a + 1;
	c = b + 1;
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				fine(a);
				c++;
			}
			b++;
		}
		a++;
	}
}
