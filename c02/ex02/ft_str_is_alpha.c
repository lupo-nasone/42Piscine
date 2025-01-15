/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:33:56 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/22 15:33:57 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
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

int ft_str_is_alpha(char *str);

int main() {
    char str1[] = "Ciao";
    char str2[] = "Ciao123";
    char str3[] = ""; // Stringa vuota

    printf("Str1 è tutta alfabetica? %d\n", ft_str_is_alpha(str1));
    printf("Str2 è tutta alfabetica? %d\n", ft_str_is_alpha(str2));
    printf("Str3 è tutta alfabetica? %d\n", ft_str_is_alpha(str3));

    return 0;
}*/
