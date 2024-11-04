/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:56:02 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/17 16:25:42 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
/*
#include <stdio.h>
int main(void)
{
	int	i;
	int	tab[10] = {0,1,2,3,4,5,6,7,8,9};

	i = 0;
	ft_rev_int_tab(tab,10);
	while (i < 10)
	{
		printf("%d",tab[i]);
		i++;
	}
	return (0);
}*/
