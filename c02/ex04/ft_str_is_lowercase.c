/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:34:29 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/22 15:34:30 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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

int ft_str_is_lowercase(char *str);

int main() {
    char str1[] = "ciao";
    char str2[] = "Ciao";
    char str3[] = ""; // Stringa vuota

    printf("Str1 è tutta minuscola? %d\n", ft_str_is_lowercase(str1));
    printf("Str2 è tutta minuscola? %d\n", ft_str_is_lowercase(str2));
    printf("Str3 è tutta minuscola? %d\n", ft_str_is_lowercase(str3));

    return 0;
}
*/
