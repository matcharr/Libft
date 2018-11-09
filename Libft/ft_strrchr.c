/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 07:46:26 by matcharr          #+#    #+#             */
/*   Updated: 2018/11/08 07:46:33 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strrchr(const char *s, int c) 
{
	int i;

	i = ft_strlen(s) + 1;

	while (--i >= 0)
		if (s[i] == c)
			return ((char *)s + i);
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
