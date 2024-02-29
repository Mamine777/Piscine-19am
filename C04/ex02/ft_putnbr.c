/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:33:56 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/20 18:38:13 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	a;

	a = nb;
	if (a < 0)
	{
		write(1, "-", 1);
		a = -a;
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	if (a < 10)
	{
		a += 48;
		write(1, &a, 1);
	}
}
/*
int main()
{
	int a;

	a = -22222;
	ft_putnbr(a);
}*/
