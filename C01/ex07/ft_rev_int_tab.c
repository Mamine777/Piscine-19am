/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariouh <mkariouh@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:38:55 by mkariouh          #+#    #+#             */
/*   Updated: 2024/02/10 22:03:59 by mkariouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	st;
	int	end;
	int	temp_;

	st = 0;
	end = size - 1;
	while (st < end)
	{
		temp_ = tab[st];
		tab[st] = tab[end];
		tab[end] = temp_;
		st++;
		end--;
	}
}
