/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:57:37 by asousa-f          #+#    #+#             */
/*   Updated: 2023/03/27 15:57:38 by asousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	j;

	i = nb;
	j = 1;
	if (nb == 1)
	{
		return (nb);
	}
	while (i > j)
	{
		i = (i + j) / 2;
		j = nb / i;
		if (i * i == nb)
		{
			return (i);
		}
	}
	return (0);
}
