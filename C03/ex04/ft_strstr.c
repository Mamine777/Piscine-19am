/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:51:08 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/17 17:30:22 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*include <stdio.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	k;
	int	i;

	k = 0;
	i = 0;
	if (to_find[k] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + k] == to_find[k] && str[i + k] != '\0')
		{
			k++;
		}
		if (to_find[k] == '\0')
			return (str + i);
		i++;
		k = 0;
	}
	return (0);
}

/*int main()
{
	char	str[] = {"tu es smart"};
	char	to_find[] = {"smart"};

	printf("%s", ft_strstr(str, to_find));
}*/
