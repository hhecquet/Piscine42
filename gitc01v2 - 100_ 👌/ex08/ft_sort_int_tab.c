/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:26:43 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/18 10:38:58 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

	j = 0;
	i = 0;
	while (i < size)
	{
		j = 1;
		while (i + j != size)
		{
			if (tab[i + j] < tab[i])
			{
				ft_swap(&tab[i], &tab[i + j]);
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
        int     i;
        int     tab[10] = {5,4,6,1,3,7,9,2,0,8};

        i = 0;
        ft_rev_int_tab(tab,10);
        while (i < 10)
        {
                printf("%d",tab[i]);
                i++;
        }
        return (0);
}*/
