/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:34:55 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/22 15:34:56 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <unistd.h>
int main(){
char *ft_strupcase(char *str);

    char str[] = "ciao mondo! questo è 'nu test.";

    printf("Originale: %s\n", str);
    ft_strupcase(str);
    printf("Dopo 'a funzione: %s\n", str);

    return 0;

}*/
