/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:52:58 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/20 14:53:00 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	if (str == NULL)
	{
		return ;
	}
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
/*
int main() {
    char *myString = "Ciao, mondo!";
    ft_putstr(myString); // Chiamata alla funzione
    return 0;
}
*/
