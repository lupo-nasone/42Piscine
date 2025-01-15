/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:23:43 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/23 16:23:44 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int main() {
    // Test della funzione
    printf("%d\n", ft_strcmp("abc", "abcdef"));   // Output: 0
    printf("%d\n", ft_strcmp("abc", "abcd"));  // Output: <0
    printf("%d\n", ft_strcmp("abcd", "abc"));  // Output: >0
    printf("%d\n", ft_strcmp("abc", "abC"));   // Output: >0
    return 0;
}
*/
