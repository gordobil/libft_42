/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:51:51 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/15 13:29:31 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(dst);
	if (size > 0 && size > len)
	{
		i = len;
		j = 0;
		while (src[j] && i < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (len + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}

/*
	i = 0;
	j = 0;
	while (dst[i] != 0)
		i++;
	while (src[i] != 0)
	{
		if (i < (size - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		else
		{
			dst[i] = 0;
			i++;
		}
	}
	dst[i] = '\0';
	return (i);
}

int	main(void)
{
	char	src[] = "hola";
	char	dest[] = "agur";

	printf("%d\n%s", ft_strlcat(dest, src, 6), dest);
	return (0);
}*/
