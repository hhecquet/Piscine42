/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:31:09 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/22 20:15:14 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_aff_str0(char *str, t_value *tab)
{
	ft_putstr(tab[str[0] - '0'].value);
	write(1, " ", 1);
	ft_putstr(tab[28].value);
	if (str[1] != '0' || str[2] != '0')
		write(1, " and ", 5);
}

void	ft_aff(char *str, t_value *tab)
{
	if (str[0] != '0')
	{
		ft_aff_str0(str, tab);
	}
	if (str[1] == '1')
	{
		ft_putstr(tab[10 + (str[2] - '0')].value);
	}
	else
	{
		if (str[1] != '0')
		{
			ft_putstr(tab[18 + (str[1] - '0')].value);
			if (str[2] != '0')
				write (1, "-", 1);
		}
		if (str[2] != '0')
			ft_putstr(tab[str[2] - '0'].value);
	}
}
