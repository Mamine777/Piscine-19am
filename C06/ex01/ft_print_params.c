/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:30:51 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/20 12:01:50 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_params(char *str)
{
	int	k;

	k = 0;
	while (str[k])
	{
		write(1, &str[k], 1);
		k++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	k;

	k = 1;
	while (k < argc)
	{
		ft_print_params(argv[k]);
		k++;
	}
	return (0);
}
