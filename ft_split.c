/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:48:03 by caunhach          #+#    #+#             */
/*   Updated: 2023/02/20 17:26:57 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_par(const char *s, char c)
{
	int	count;
	int	sw;

	count = 0;
	sw = 0;
	while (*s)
	{
		if (*s != c && sw == 0)
		{
			sw = 1;
			count++;
		}
		else if (*s == c)
			sw = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**dest;

	if (s == NULL)
		return (NULL);
	dest = (char **)malloc((count_par(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (0);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			dest[j++] = ft_substr(s, index, i - index);
			index = -1;
		}
	}
	dest[j] = 0;
	return (dest);
}
