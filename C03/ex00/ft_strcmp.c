/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:07:04 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/20 10:30:50 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	k;

	k = 0;
	while (s1[k] == s2[k] && s2[k] != '\0')
	{
		k++;
	}
	return (s1[k] - s2[k]);
}
/*
int main ()
{
	char s1[] = "tu es smart";
	char s2[] = "youareamazing";
	printf ("return : %d" , ft_strcmp(s1, s2));
	return (0);
}*/
