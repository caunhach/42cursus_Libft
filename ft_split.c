/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:48:03 by caunhach          #+#    #+#             */
/*   Updated: 2023/02/16 18:39:10 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_par(char const *s, char c)
{
	size_t	count;
	int		sw;

	count = 0;
	sw = 0;
	while (*s)
	{
		if (*s != c)
		{
			sw = 1;
			count += 1;
		}
		else
		{
			if (sw == 1)
			{
				count += 1;
				sw = 0;
			}
		}
		s++;
	}
	if (sw == 1)
		count += 1;
	return (count);
}

char	*dup_par(char const *s, size_t start, size_t end)
{
	size_t	i;
	size_t	len;
	int		trigger;
	char	*dest;

	i = 0;
	trigger = 1;
	len = end - start + 1;
	dest = (char *)malloc(len * sizeof(char));
	while (start < end)
	{
		dest[i++] = s[start++];
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		start;
	size_t	i;
	size_t	j;

	start = -1;
	i = 0;
	j = 0;
	dest = (char **)malloc(count_par(s, c) * sizeof(char *) + 1);
	if (!dest)
		return (NULL);
	while (i < ft_strlen(s) + 1)
	{
		if (s[i] != c && start == -1)
			start = i;
		else if (start != -1 && (s[i] == c || i == ft_strlen(s)))
		{
			dest[j++] = dup_par(s, start, i);
			start = -1;
		}
		i++;
	}
	dest[j] = NULL;
	return (dest);
}
