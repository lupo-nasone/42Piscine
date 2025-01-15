/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:34:46 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/22 15:34:48 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <unistd.h>

int ft_str_is_printable(char *str);

int main() {
    char str1[] = "Ciao, mondo!";
    char str2[] = "Ciao\x01";

    printf("Str1 è stampabile? %d\n", ft_str_is_printable(str1));
    printf("Str2 è stampabile? %d\n", ft_str_is_printable(str2));

    return 0;
}*/
