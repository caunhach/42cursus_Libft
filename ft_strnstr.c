/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:16:59 by caunhach          #+#    #+#             */
/*   Updated: 2023/02/14 19:52:52 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_big;
	size_t	len_little;

	len_big = ft_strlen(big);
	len_little = ft_strlen(little);
	if (len_little == 0)
		return ((char *)big);
	while (len-- >= len_little && *big != '\0')
	{
		if (ft_memcmp(big, little, len_little) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
