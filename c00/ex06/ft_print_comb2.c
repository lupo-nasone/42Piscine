/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:31:35 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/17 17:31:38 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	p_numbers(int n, int pos)
{
	char	c;

	if (pos == 0)
	{
		c = ((n / 10) + 48);
		write(1, &c, 1);
	}
	else
	{
		c = ((n % 10) + 48);
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	while (n1 <= 99)
	{
		while (n2 <= 99)
		{
			if (n1 < n2)
			{
				p_numbers(n1, 0);
				p_numbers(n1, 1);
				write(1, " ", 1);
				p_numbers(n2, 0);
				p_numbers(n2, 1);
				if (n1 != 98 || n2 != 99)
					write(1, ", ", 2);
			}
			n2++;
		}
		n2 = 0;
		n1++;
	}
}
