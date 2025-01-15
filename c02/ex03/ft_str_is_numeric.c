/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:34:19 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/22 15:34:20 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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

int ft_str_is_numeric(char *str);

int main() {
    char str1[] = "12345";
    char str2[] = "123a45";
    char str3[] = ""; // Stringa vuota

    printf("Str1 è tutta numerica? %d\n", ft_str_is_numeric(str1));
    printf("Str2 è tutta numerica? %d\n", ft_str_is_numeric(str2));
    printf("Str3 è tutta numerica? %d\n", ft_str_is_numeric(str3));

    return 0;
}*/
