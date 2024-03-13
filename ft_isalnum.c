/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:43:12 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/10 13:56:35 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

/*int ft_isalpha(unsigned char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	return (1);
}

int	ft_isdigit(unsigned char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}*/

int	ft_isalnum(int c)
{
	int	r;

	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		r = 1;
	else
		return (0);
	return (r);
}

/*int main(void)
{
	unsigned char	str[] = "hola35 26";
	int r;
	int	i;

	r = 0;
	i = 0;
	while (str[i] != '\0')
	{
		r = ft_isalnum(str[i]);
		if (r == 0)
			break;
		printf("%d %c\n", r, str[i]);
		i++;
	}
	printf("\n%d", r);
	return (0);
}*/
