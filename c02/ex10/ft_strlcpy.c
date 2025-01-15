/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:35:19 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/22 15:35:20 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int		i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
		{
			i++;
		}
		return (i);
	}
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size);

int main() {
    char dest[10];
    const char *src = "Hello, World!";
    unsigned int size = sizeof(dest);

    unsigned int result = ft_strlcpy(dest, src, size);

    // Stampa i risultati
    printf("Source: %s\n", src);
    printf("Destination after copy: %s\n", dest);
    printf("Length of source string: %u\n", result);
    printf("Size of destination buffer: %u\n", size);

    return 0;
}*/
