/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:29:26 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/26 16:15:45 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}
/*
#include <stdio.h>

int main() {
    int min;
    int max;
    int i;
    int *range;

    min = -2;
    max = 6;
    
    int size = ft_ultimate_range(&range, min, max);
    if (range == NULL) {
        printf("Error");
        return (1);
    }

        printf("%d ", size);

    printf("\n");

    free(range); // Free memory
    return (0);
}*/
