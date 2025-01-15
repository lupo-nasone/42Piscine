/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:49:09 by mafagina          #+#    #+#             */
/*   Updated: 2024/11/04 11:49:10 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;

	len = ft_strlen(src) + 1;
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strcpy(copy, src);
	return (copy);
}
/*
int main(void)
{
    char *original = "ciao cme va ";
    char *duplicate;

    // Crea una copia della stringa originale
    duplicate = ft_strdup(original);

    // Controlla se la duplicazione è andata a buon fine
    if (duplicate != NULL)
    {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
    }
    else
    {
        printf("Memory allocation failed!\n");
    }

    // Libera la memoria allocata
    free(duplicate);
    
    return 0;
}*/
