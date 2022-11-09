/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:55:48 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/07 15:10:06 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	//char	x = 'v';
	//int		y = 25;
	char str1[] = "Hello is it me you're looking for?";
	char str2[] = "I can see it in your eyes";
	//char str2 = 'i';
	char *str = ft_strjoin(str1, str2);

	printf("%s", str);
	free(str);
	return (0);
}
