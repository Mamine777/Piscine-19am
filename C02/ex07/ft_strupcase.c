/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:46:37 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/13 12:19:27 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] >= 97 && str[k] <= 122)
			str[k] -= 32;
		k++;
	}
	return (str);
}
/*#include <stdio.h>
int main()
{
	char c[] = "string";
	printf ("%s", ft_strupcase(c));
}*/
