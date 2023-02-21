/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:16:59 by caunhach          #+#    #+#             */
/*   Updated: 2023/02/21 15:05:19 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_big;
	size_t	len_little;

	len_big = ft_strlen(big);
	len_little = ft_strlen(little);
	if (*little == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (len-- >= len_little && *big != '\0')
	{
		if (ft_strncmp(big, little, len_little) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
