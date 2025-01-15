/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:35:02 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/22 15:35:03 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (str);
}
/*
int main(){
#include <stdio.h>
#include <unistd.h>

char *ft_strlowcase(char *str);
    char str[] = "Ciao MONDO! QUESTO E 'NU TEST.";

    printf("Originale: %s\n", str);
    ft_strlowcase(str);
    printf("Dopo 'a funzione: %s\n", str);

    return 0;
}
*/
