/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:49:17 by mafagina          #+#    #+#             */
/*   Updated: 2024/11/04 11:49:18 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	arr = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

/*
int main() {
    int min = 5;
    int max = 10;
    int *range;
    int i;

    range = ft_range(min, max);
    if (range == NULL) {
        printf("Nessun intervallo creato.\n");
        return 1; // Uscita con errore
    }

    // Stampa i valori dell'array
    for (i = 0; i < (max - min); i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    // Libera la memoria allocata
    free(range);

    return 0; // Uscita con successo
}
*/
