/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:09:21 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/11 20:06:38 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
	{
		len++;
	}
	return (len);
}
/*
#include <unistd.h>
void    ft_putchar(char c)
{
        write(1, &c, 1);
}
void    ft_putnbr(int nb)
{
        if (nb < 0)
        {
                ft_putchar('-');
                nb = -nb;
        }
        if (nb > 9)
        {
                ft_putnbr(nb / 10);
        }
        ft_putchar(nb % 10 + 48);
}
int main(void)
{
	ft_putnbr(ft_strlen("Bonjour 42 :-)")); //quatorze
	return(0);
}*/
