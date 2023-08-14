/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <digoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:31:12 by digoncal          #+#    #+#             */
/*   Updated: 2023/03/23 10:35:39 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	print_adress(unsigned long p)
{
	int				len;

	len = 0;
	if (p < 16)
		len += write(1, &"0123456789abcdef"[p], 1);
	if (p >= 16)
	{
		len += print_adress(p / 16);
		len += print_adress(p % 16);
	}
	return (len);
}

static int	print_arg(va_list args, char type)
{
	if (type == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	if (type == 's')
		return (print_str(va_arg(args, char *)));
	if (type == 'p')
		return (print_pointer(va_arg(args, unsigned long *)));
	if (type == 'd')
		return (print_nbr(va_arg(args, int)));
	if (type == 'i')
		return (print_nbr(va_arg(args, int)));
	if (type == 'u')
		return (print_unbr(va_arg(args, unsigned int)));
	if (type == 'x')
		return (print_hex(va_arg(args, unsigned int), 1));
	if (type == 'X')
		return (print_hex(va_arg(args, unsigned int), 0));
	if (type == '%')
		ft_putchar_fd('%', 1);
	if (type == 'c' || type == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, str);
	i = -1;
	len = 0;
	while (str[++i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
		else
			len += print_arg(args, str[++i]);
	}
	va_end(args);
	return (len);
}
