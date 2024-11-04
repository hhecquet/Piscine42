/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:41:29 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/12 15:29:54 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		n = n * -1;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}
/*
int main(void)
{
        ft_putnbr(-6312);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
        ft_putchar('\n');
	ft_putnbr(-0);
        ft_putchar('\n');
	ft_putnbr(778446312);
        ft_putchar('\n');
        return (0);
}*/
