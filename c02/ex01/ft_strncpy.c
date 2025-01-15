/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:33:42 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/22 15:33:44 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, const char *src, int n)
{
	int		i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *dest, const char *src, int n);

int main() {
    char dest[20];
    const char *src = "Ciao Mondo!";

    ft_strncpy(dest, src, 10);
    printf("Destinazione dopo strncpy: '%s'\n", dest);

    ft_strncpy(dest, src, 5);
    printf("Destinazione dopo strncpy: '%s'\n", dest);

    ft_strncpy(dest, src, 20);
    printf("Destinazione dopo strncpy: '%s'\n", dest);

    return 0;
}
*/
