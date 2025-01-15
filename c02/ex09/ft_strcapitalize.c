/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:35:11 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/22 15:35:12 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check(char str)
{
	if (!((str >= 'A' && str <= 'Z')
			|| (str >= 'a' && str <= 'z')
			|| (str >= '0' && str <= '9')))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		n;

	n = 0;
	if (str[n] >= 'a' && str[n] <= 'z')
	{
		str[n] -= 32;
	}
	n += 1;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
		{
			str[n] += 32;
		}
		if (check(str[n - 1]))
		{
			if (str[n] >= 'a' && str[n] <= 'z')
			{
				str[n] -= 32;
			}
		}
		n++;
	}
	return (str);
}
/*
#include <stdio.h>

char *ft_strcapitalize(char *str);

int main() {
    char str[] = "hola mundo! questo è nu test. 123 prova 'e capitalizzazione.";
    
    printf("Originale: %s\n", str);
    ft_strcapitalize(str);
    printf("Capitalizzato: %s\n", str);

    return 0;
}
*/
