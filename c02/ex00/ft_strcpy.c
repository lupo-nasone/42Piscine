/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:33:32 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/22 15:33:33 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main() {
	#include <stdlib.h>
    const char *src = "Hello, World!";
    char *dest = (char *)malloc(14);

    if (dest == NULL) {
        return 1; // Controllo dell'allocazione
    }

    ft_strcpy(dest, src);

    write(1, dest, 13);
    write(1, "\n", 1);

    free(dest); // Liberare la memoria allocata
    return 0;
}
*/
