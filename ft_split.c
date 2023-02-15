/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:48:03 by caunhach          #+#    #+#             */
/*   Updated: 2023/02/15 20:49:18 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlen_par(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		if (*s == c)
			break ;
		s++;
		len++;
	}
	return (len);
}

size_t	count_par(char const *s, char c)
{
	int		sw;
	size_t	count;

	sw = 1;
	count = 0;
	while (*s)
	{
		if (*s != c && sw == 1)
		{
			count += 1;
			sw = 0;
		}
		else if (*s == c)
			sw = 1;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**dest;

	i = 0;
	j = 0;
	dest = (char **)maloc(count_par(s, c) * sizeof(char *) + 1);
	if (!dest)
		return (NULL);
	while (count--)
	{
		dest[i] = (char *)malloc((count_par(s, c) + 1) * sizeof(char));
		if (!dest[i])
			return (NULL);
		while (*s && *s != c)
		{
			dest[i][j] = *s++;
			j++;
		}
		dest[i][j] = '\0';
		i++;
	}
	dest[i][j] = NULL;
	return (dest);
}
