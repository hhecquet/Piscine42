/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:33:01 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/12 19:42:03 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while ((nb % n) != 0)
	{
		n++;
	}
	if (nb == n)
	{
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	n;

	n = 0;
	while (n == 0)
	{
		n = ft_is_prime(nb);
		nb++;
	}
	return (nb -1);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("%d\n",ft_find_next_prime(-1));
        printf("%d\n",ft_find_next_prime(0));
        printf("%d\n",ft_find_next_prime(1));
        printf("%d\n",ft_find_next_prime(2));
        printf("%d\n",ft_find_next_prime(5));
        printf("%d\n",ft_find_next_prime(12));
	printf("%d\n",ft_find_next_prime(243));
        return(0);
}*/
