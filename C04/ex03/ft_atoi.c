/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:45:02 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/20 19:14:55 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
int	ft_atoi(char *str)
{
	int	c;
	int	sign;
	int	number;

	number = 0;
	c = 0;
	sign = 1;
	while (str[c] == ' ' || (str[c] >= 9 && str[c] <= 13))
	{
		c++;
	}
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
		{
			sign = sign * (-1);
		}
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		number = number * 10 + (str[c] - 48);
		c++;
	}
	return (number * sign);
}
/*
int main()
{
	char num[] = "---++--1234abc345"; 
	printf("%d", ft_atoi(num));
}*/
