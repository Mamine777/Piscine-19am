/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:57:13 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/20 13:31:42 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
int	ft_strlen(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	return (k);
}
/*
int	main()
{
	char str[] = "hello";
	printf("%d", ft_strlen(str));
}*/
