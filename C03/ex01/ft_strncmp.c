/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:14:39 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/20 10:28:05 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	k;

	k = 0;
	if (n == 0)
		return (0);
	while (k < n - 1 && s1[k] == s2[k] && s1[k] != '\0')
	{
		k++;
	}
	return (s1[k] - s2[k]);
}
/*
int main ()
{
	char a[] = "hello";
	char b[] = "hellg";

	printf("%d", ft_strncmp(a, b, 5));
}*/
