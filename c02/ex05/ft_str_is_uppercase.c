/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:34:38 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/22 15:34:39 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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

int ft_str_is_uppercase(char *str);

int main() {
    char str1[] = "Ciao";
    char str2[] = "CIAO";

    printf("Str1 è tutta maiuscola? %d\n", ft_str_is_uppercase(str1));
    printf("Str2 è tutta maiuscola? %d\n", ft_str_is_uppercase(str2));

    return 0;
}*/
