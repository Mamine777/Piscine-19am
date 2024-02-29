/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:11:39 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/26 16:17:57 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main()
{
	int	min;
	int	max;
	int	i;
	int	*range;
	int	len;

	min = -2;
	max = 6;
	range = ft_range(min, max);
	if (range == NULL)
	{
		printf("Error");
		return (1);
	}
	i = 0;
	while (i < max - min)
	{
		printf("%d", range[i]);
		i++;
	}
}*/
