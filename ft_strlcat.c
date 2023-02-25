/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:46:42 by caunhach          #+#    #+#             */
/*   Updated: 2023/02/21 15:02:06 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_s;

	j = 0;
	len_s = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (len_s);
	i = ft_strlen(dest);
	if (i < size)
	{
		while (*src && i + j < size - 1)
		{
			*(dest + i + j++) = *src++;
		}
		*(dest + i + j) = '\0';
	}
	else
		i = size;
	return (i + len_s);
}
