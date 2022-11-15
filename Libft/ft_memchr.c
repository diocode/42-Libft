/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:02:07 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/14 11:21:59 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;	

	s = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		if (*s == (unsigned char) c)
			return ((void *) s);
		s++;
		i++;
	}
	return (0);
}
