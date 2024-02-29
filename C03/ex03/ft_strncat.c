/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:53:55 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/17 11:27:44 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	k;
	unsigned int	v;

	k = 0;
	v = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[v] != '\0' && v < nb)
	{
		dest[k] = src[v];
		k++;
		v++;
	}
	dest[k] = '\0';
	return (dest);
}
/*
int main()
{
	char	src[] = {"chuchi"};
	char	dest[] = {"pumop"};

	printf("%s", ft_strncat(src, dest, 2));
}*/
