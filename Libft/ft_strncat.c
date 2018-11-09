/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 06:37:39 by matcharr          #+#    #+#             */
/*   Updated: 2018/11/08 07:02:50 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, const char *src, size_t n)
{
	int len;
	int i;

	len = 0;
	while (((char*)dest)[len])
	{
		len++;
	}
	i = 0;
	while (n > 0)
	{
		((char*)dest)[len + i] = ((char*)src)[i];
		i++;
		n--;
	}
	return (dest);
}

int main ()
{
	char str1[20];
	char str2[20];
	strcpy (str1,"To be ");
	strcpy (str2,"or not to be");
	ft_strncat (str1, str2, 6);
	puts (str1);
	return 0;
}
