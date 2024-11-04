/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:30:23 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/12 19:38:00 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while ((i * i) < nb)
	{
		i++;
	}
	if ((i * i) == nb)
	{
		return (i);
	}
	return (0);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("%d\n",ft_sqrt(4));
        printf("%d\n",ft_sqrt(36));
        printf("%d\n",ft_sqrt(0));
        printf("%d\n",ft_sqrt(-1));
        printf("%d\n",ft_sqrt(37));
        return (0);
}*/
