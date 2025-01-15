/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:51:01 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/24 11:51:02 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	int					i;
	int					j;
	unsigned int		k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	k = 0;
	while (src[j] != '\0' && k < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
