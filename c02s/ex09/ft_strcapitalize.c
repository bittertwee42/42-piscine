/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:19:27 by fchieric          #+#    #+#             */
/*   Updated: 2023/11/08 11:59:38 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && first == 1)
			cambia = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z' && first == 0)
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && first == 1)
		{
			str[i] -= 32;
			first = 0;
		}
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
					&& str[i] <= 'Z')))
			first = 1;
		if (str[i] >= '0' && str[i] <= '9')
			first = 0;
		i++;
	}
	return (i);
}
