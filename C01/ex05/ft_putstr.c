/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:38:54 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/14 15:18:40 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		write(1, &str[k], 1);
		k++;
	}
}

int main()
{
	char *str;

	str = "Heello,";
	ft_putstr(str);
	return (0);
}
