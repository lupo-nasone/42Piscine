/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:28:14 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/31 12:28:15 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	check_equal(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_pm(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len < 2 || !check_equal(base) || !check_pm(base))
	{
		return ;
	}
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / base_len, base);
		nbr = -(nbr % base_len);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base);
		nbr %= base_len;
	}
	write(1, &base[nbr], 1);
}
/*
int main() {
    int a = 10;
    char *base = "01";
    
    // Test with INT_MIN
    ft_putnbr_base(-2147483648, base); // Directly using the value of INT_MIN
    
    return 0;
}
*/
