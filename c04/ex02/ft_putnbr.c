/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:27:44 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/20 14:27:46 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	j;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
		}
		j = ((n % 10) + 48);
		write(1, &j, 1);
	}
}