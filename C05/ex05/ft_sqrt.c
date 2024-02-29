/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:33:26 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/24 22:21:25 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b == 0)
		return (0);
	if (b == 1)
		return (1);
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(64));
}*/
