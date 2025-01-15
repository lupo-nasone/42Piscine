/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:59:44 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/24 11:59:45 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, const char *to_find)
{
	int	j;

	if (!*to_find)
	{
		return (str);
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			j = 0;
			while (to_find[j] && str[j] == to_find[j])
			{
				j++;
			}
			if (!to_find[j])
			{
				return (str);
			}
		}
		str++;
	}
	return (NULL);
}
