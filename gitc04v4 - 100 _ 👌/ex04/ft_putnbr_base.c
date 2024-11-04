/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:49:44 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/12 00:06:57 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_base(char *base)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (1);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;

	n = nbr;
	if (ft_base(base))
	{
		return ;
	}
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	if (n > ft_strlen(base) - 1)
	{
		ft_putnbr_base(n / ft_strlen(base), base);
	}
	write (1, &base[n % ft_strlen(base)], 1);
}
/*
#include <stdio.h>
int main(void)
{
        char    base[] = "hermin";
        ft_putnbr_base(-2147483648, base);
	printf("%c",'\n');
	ft_putnbr_base(-26, base);
	printf("%c",'\n');
	ft_putnbr_base(2147483647, base);
	printf("%c",'\n');
	ft_putnbr_base(26, base);
        return (0);
}*/
