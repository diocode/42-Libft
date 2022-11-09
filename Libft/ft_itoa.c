/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:47:09 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/09 16:11:36 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

static char	*ft_nbtchr(char *str, int n)
{
	int	i;
	int	tmp;

	i = ft_size(n);
	str[i--] = '\0';
	while (n >= 0 && i >= 0)
	{
		str[i--] = (n % 10) + '0';
		n = n / 10;
	}
	tmp = -n;
	while (n < 0 && i > 0)
	{		
		str[i--] = (tmp % 10) + '0';
		tmp = tmp / 10;
		str[0] = '-';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	str = (char *) malloc(sizeof(char) * (ft_size(n) + 1));
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	str = ft_nbtchr(str, n);
	return (str);
}
