/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 07:04:59 by matcharr          #+#    #+#             */
/*   Updated: 2018/11/08 07:40:50 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *strchr(const char *s, int c)
{
	int i;

	i = 0;

	while (s[i])
	{
		if (((char*)s)[i] != c)
		{
			i++;
		}
		else
			return (s+i);
	}
	return (NULL);
}

int main ()
{
	char str[] = "This is a sample string";
	char * pch;
	printf ("Looking for the 's' character in \"%s\"...\n",str);
	pch=strchr(str,'s');
	while (pch!=NULL)
	{
		printf ("found at %d\n",pch-str+1);
		pch=strchr(pch+1,'s');
	}
	return 0;
}
