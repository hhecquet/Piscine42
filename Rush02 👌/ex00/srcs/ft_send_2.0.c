/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_2.0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:16:56 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/22 21:44:21 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_send4(char *aff, char *des, int i)
{
	while (i != 3)
	{
		aff[i] = des[i];
		i++;
	}
	aff[i] = '\0';
}

void	ft_send3(char *des, char *dest, t_value *tab, int i)
{
	i = 3;
	while (des[i])
	{
		dest[i - 3] = des[i];
		i++;
	}
	dest[i - 3] = '\0';
	ft_send(dest, tab);
	free(des);
	free(dest);
}

void	ft_send2(int k, t_value *tab, char *des, int i)
{
	if (k > 1)
	{
		write (1, " ", 1);
		ft_putstr(tab[27 + k].value);
		while (des[i])
		{
			if (des[i] != '0')
			{
				if (i == (ft_strlen(des) - 1))
					write (1, " and ", 5);
				else
				{
					write (1, ", ", 2);
					break ;
				}
			}
			i++;
		}
	}
}
