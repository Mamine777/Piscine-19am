/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:09:43 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/13 19:20:14 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		if ((str[k] < 'a' || str[k] > 'z')
			&& (str[k] < 'A' || str[k] > 'Z'))
			return (0);
		k++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	char str[] = "hdfthdfhgjk15hsfdss";
	ft_str_is_alpha(str);
	printf("%d\n", ft_str_is_alpha(str));
}*/
