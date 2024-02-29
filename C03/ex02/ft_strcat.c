/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:34:21 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/19 11:48:43 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	max_length(char *x)
{
	int	i;

	i = 0;
	while (x[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	k;
	int	i;

	i = 0;
	k = max_length(dest);
	while (src[i])
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
