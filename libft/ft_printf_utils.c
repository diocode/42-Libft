/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <digoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:20:58 by digoncal          #+#    #+#             */
/*   Updated: 2023/03/23 10:35:36 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	print_hex(unsigned int nbr, int uplow)
{
	unsigned int	tmp;
	int				len;

	tmp = nbr;
	len = 0;
	if (tmp < 16)
	{
		if (uplow)
			write(1, &"0123456789abcdef"[tmp], 1);
		else
			write(1, &"0123456789ABCDEF"[tmp], 1);
		len++;
	}
	if (tmp >= 16)
	{
		len += print_hex(tmp / 16, uplow);
		len += print_hex(tmp % 16, uplow);
	}
	return (len);
}

int	print_unbr(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr >= 10)
	{
		len += print_unbr(nbr / 10);
		nbr = nbr % 10;
	}
	if (nbr < 10)
		ft_putchar_fd(nbr + '0', 1);
	return (len + 1);
}

int	print_nbr(int nbr)
{
	int	len;

	ft_putnbr_fd(nbr, 1);
	len = 0;
	if (nbr == -2147483648)
	{
		nbr = 147483648;
		len += 2;
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len + 1);
}

int	print_str(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}

int	print_pointer(unsigned long *p)
{
	int	len;

	len = 0;
	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
		len += write(1, "0x", 2);
	len += print_adress((unsigned long) p);
	return (len);
}
