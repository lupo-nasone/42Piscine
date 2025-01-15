/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:49:25 by mafagina          #+#    #+#             */
/*   Updated: 2024/11/04 11:49:27 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (min != max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
int main() {
    int *range;
    int min = 5;
    int max = 10;
    int size;
    
    size = ft_ultimate_range(&range, min, max);
    
    if (size == -1) {
        printf("Memory allocation failed\n");
        return 1;
    } else if (size == 0) {
        printf("Range is empty\n");
    } else {
        printf("Generated range: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", range[i]);
        }
        printf("\n");
    }
}*/
