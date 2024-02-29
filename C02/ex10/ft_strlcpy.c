/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:43:54 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/26 21:45:09 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = ft_len(src);
	if (size != '\0')
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (k);
}
/*
#include <stdio.h>

int main()
{
	char a[] = "coco";
	char b[] = "coco";
	printf("%d", ft_strlcpy(a, b, 2));
}*/
