/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:22:24 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/13 19:26:05 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] < 32 || str[k] > 126)
			return (0);
		k++;
	}
	return (1);
}
