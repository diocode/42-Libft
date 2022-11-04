/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:55:48 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/04 13:27:26 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	//char	x = 'v';
	//int		y = 25;
	char str1[999] = "Hello is it me"; 
	char str2 = 'i';

	printf("%s\n", ft_strrchr(str1, str2));
	return (0);
}
