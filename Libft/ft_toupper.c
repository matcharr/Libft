/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:01:04 by matcharr          #+#    #+#             */
/*   Updated: 2018/11/09 20:01:21 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include <ctype.h>

int ft_toupper(int c)
{
	char a = (char)c;
	if ( a >= 'a' && a <= 'z' )
	{
		a = a - 32;
	}
	return (a);
}

int main()
{
	char c, result;

	c = 'M';
	result = ft_toupper(c);
	printf("ft_toupper(%c) = %c\n", c, result);

	c = 'm';
	result = ft_toupper(c);
	printf("ft_toupper(%c) = %c\n", c, result);

	c = '+';
	result = ft_toupper(c);
	printf("ft_toupper(%c) = %c\n", c, result);

	return 0;
}
