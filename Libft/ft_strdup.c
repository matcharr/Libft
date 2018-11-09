/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 04:19:48 by matcharr          #+#    #+#             */
/*   Updated: 2018/11/06 04:27:38 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = -1;
	dest = (char*)malloc(sizeof(src) * sizeof(char));
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
