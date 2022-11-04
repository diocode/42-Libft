/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:02:07 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/04 14:23:17 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;	

	s = (unsigned char *) str;
	while (*s && n--)
	{
		if (*s == c)
			return ((void *) s);
		s++;
	}
	return (0);
}