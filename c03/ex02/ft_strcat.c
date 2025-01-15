/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:49:25 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/24 11:49:27 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main() {
    char dest[50] = "Hola, "; // Asegúrate de que haya suficiente espacio
    char src[] = "mundo!";

    printf("Antes de concatenar: %s\n", dest);
    ft_strcat(dest, src);
    printf("Después de concatenar: %s\n", dest);

    return 0;
}
*/
