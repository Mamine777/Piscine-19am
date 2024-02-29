/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:51:07 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/25 16:15:09 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include  <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			fact *= nb;
			nb--;
		}
	}
	return (fact);
}
/*
int	main()
{
	int b;

	b = 6;
	printf("%d", ft_iterative_factorial(b));
}*/
