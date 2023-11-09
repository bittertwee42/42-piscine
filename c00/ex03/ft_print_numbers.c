/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:21:56 by fchieric          #+#    #+#             */
/*   Updated: 2023/10/30 17:48:45 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numero;

	numero = 48;
	while (numero >= 48 && numero <= 57)
	{
		write(1, &numero, 1);
		numero++;
	}
}
