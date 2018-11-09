/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:46:26 by matcharr          #+#    #+#             */
/*   Updated: 2018/11/09 19:43:26 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
	char a = (char)c;
	if ( a >= 'A' && a <= 'Z' )
	{
		a = a + 32;
	}
	return (a);
}

int main()
{
	char c, result;

	c = 'M';
	result = ft_tolower(c);
	printf("ft_tolower(%c) = %c\n", c, result);

	c = 'm';
	result = ft_tolower(c);
	printf("ft_tolower(%c) = %c\n", c, result);

	c = '+';
	result = ft_tolower(c);
	printf("ft_tolower(%c) = %c\n", c, result);

	return 0;
}
