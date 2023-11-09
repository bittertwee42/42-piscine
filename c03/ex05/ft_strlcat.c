/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:23:52 by fchieric          #+#    #+#             */
/*   Updated: 2023/11/09 15:56:17 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	while (*str != '\0')
		str++;
	return (str);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t			i;
	size_t			j;
	unsigned int	des_len;
	unsigned int	src_len;
	char			c;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	des_len = j;
	src_len = ft_strlen(src);
	if (size == 0 || size <= des_len)
		return (src_len + size);
	while (src[i] != '\0' && i < size - des_len - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	resturn (des_len + src_len);
}
