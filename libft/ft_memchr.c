/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <digoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:02:07 by digoncal          #+#    #+#             */
/*   Updated: 2023/03/23 10:35:14 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
