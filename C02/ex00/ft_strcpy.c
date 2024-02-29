/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:05:32 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/13 17:14:29 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	k;

	k = 0;
	while (src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[10];
	char	src[10];

	printf ("%s", "guckkkkk");
	printf ("%s", ft_strcpy(dest, src));
}*/
