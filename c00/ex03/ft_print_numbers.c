/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:42:22 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/17 09:52:51 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		n;
	char	c;

	n = 0;
	while (n < 10)
	{
		c = n + 48;
		write(1, &c, 1);
		n++;
	}
}
