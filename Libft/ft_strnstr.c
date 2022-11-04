/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:26:59 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/04 16:36:23 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	char	*pbig;
	char	*plittle;

	pbig = (char *) big;
	plittle = (char *) little;

	i = 0;
	j = 0;
	if (!plittle[j])
		return (pbig);
	while (pbig[i] && len--)
	{
		while (pbig[i + j] && pbig[i + j] == plittle[j])
			j++;
		if (!plittle[j])
			return (pbig + i);
		i++;
		j = 0;
	}
	return (0);
}
