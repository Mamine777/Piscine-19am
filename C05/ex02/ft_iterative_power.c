/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:49:53 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/24 22:01:53 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		result *= nb;
		power --;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
/*
#include <stdio.h>

int main ()
{
	printf("%d", ft_iterative_power(5, 3));
}*/
