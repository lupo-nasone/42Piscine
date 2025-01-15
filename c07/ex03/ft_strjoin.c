/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:49:34 by mafagina          #+#    #+#             */
/*   Updated: 2024/11/04 11:49:36 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(sep) + 1;
		len += ft_strlen(strs[i]) + 1;
		i++;
	}
	str = (char *)malloc(len * sizeof(char));
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i != size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
int main(void)
{
    // Example strings to join
    char *strings[] = {
        "Hello",
        "world",
        "this",
        "is",
        "C"
    };
    
    // Separator
    char *separator = ", ";
    
    // Number of strings
    int size = sizeof(strings) / sizeof(strings[0]);
    
    // Join strings
    char *result = ft_strjoin(size, strings, separator);
    
    // Print the result
    if (result)
    {
        printf("%s\n", result);
        free(result); // Don't forget to free the allocated memory!
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
