/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:36:27 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/24 21:56:55 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb > 0)
	{
		res *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (res);
}
/*
#include	<stdio.h>

int main()
{
	int b;

	b = 6;
	printf("%d", ft_recursive_factorial(b));
}*/
