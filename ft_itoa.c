/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:08:58 by caunhach          #+#    #+#             */
/*   Updated: 2023/02/16 22:11:26 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *s)
{
	int		len;
	int		i;
	char	temp;

	i = 0;
	if (*s == '-')
		s++;
	len = ft_strlen(s);
	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		i++;
	}
}

int	len_nbr(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len += 1;
	else if (n == 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*dest;
	int		i;

	i = 0;
	sign = 1;
	dest = (char *)malloc((len_nbr(n) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	if (n < 0)
	{
		sign = -1;
		dest[i++] = '-';
	}
	else if (n == 0)
		dest[i++] = 48;
	while (n != 0)
	{
		dest[i++] = (n % 10) * sign + 48;
		n /= 10;
	}
	dest[i] = '\0';
	ft_strrev(dest);
	return (dest);
}
