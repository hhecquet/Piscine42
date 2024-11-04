/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:20:25 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/22 22:28:57 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_zero(char *str, int k)
{
	char	*des;
	int		i;

	i = 0;
	des = malloc (sizeof(char) * (k * 3) + 1);
	des[k * 3] = '\0';
	while ((k * 3 - i) >= 0)
	{
		if ((ft_strlen2(str) - i) < 0)
			des[k * 3 - i] = '0';
		else
		{
			des[k * 3 - i] = str[ft_strlen2(str) - i];
		}
		i++;
	}
	return (des);
}

void	ft_send(char *str, t_value *tab)
{
	int		k;
	int		i;
	char	*des;
	char	*dest;
	char	aff[4];

	k = (ft_strlen2(str) / 3);
	i = 0;
	if ((ft_strlen2(str) % 3) != 0)
		k++;
	des = ft_zero(str, k);
	ft_send4(aff, des, i);
	if (aff[0] != '0' || aff[1] != '0' || aff[2] != '0')
	{
		ft_aff(aff, tab);
		ft_send2(k, tab, des, 3);
	}
	dest = malloc(sizeof(char) * ((k - 1) * 3) + 1);
	if (k == 1)
	{
		free(des);
		free(dest);
		return ;
	}
	ft_send3(des, dest, tab, i);
}

void	ft_first(char *str, t_value *tab)
{
	int		i;

	i = 0;
	while (*str)
	{
		if (*str != '0')
		{
			while (tab[i].nb)
				i++;
			if (ft_strlen(tab[i - 1].nb) + 2 < ft_strlen(str))
				ft_putstr("Dict Error");
			else
			{
				ft_send(str, tab);
			}
			return ;
		}
		str++;
	}
	ft_putstr(tab[0].value);
	return ;
}
