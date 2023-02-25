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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	char	*ptr;

	ptr = (char *) haystack;
	if (*needle == 0)
		return (ptr);
	if (len == 0)
		return (NULL);
	needle_len = ft_strlen(needle);
	i = 0;
	while ((ptr[i] != '\0') && ((i + needle_len) <= len))
	{
		if (ft_strncmp(&ptr[i], needle, needle_len) == 0)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
