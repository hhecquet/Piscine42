/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:34:33 by adelattr          #+#    #+#             */
/*   Updated: 2024/09/22 22:18:11 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}

void	ft_do_3(int fd, char *s1, char *s2, t_value *tab)
{
	if (!ft_is_number(s2))
	{
		write(2, "Error", 5);
		return ;
	}
	fd = open(s1, O_RDONLY);
	if (fd < 0 || !ft_check_dict(fd, 1))
		write(2, "Dict Error", 10);
	else
	{
		tab = ft_create_tab(s1);
		ft_sort_struct(tab);
		tab = ft_verif_value(tab, 0, 0, 0);
		ft_first(s2, tab);
		ft_free_struct(tab);
	}
}

int	ft_is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (!str[i])
		return (1);
	return (0);
}

t_value	*ft_verif_value(t_value *tab, int i, int j, int k)
{
	char	*tmp;

	while (tab[i].value)
	{
		j = 0;
		k = 0;
		while (tab[i].value[j] != '\0' && ++j && ++k)
			while (tab[i].value[j] == ' ' && tab[i].value[j + 1] == ' ')
				j++;
		tmp = malloc(sizeof(char) * (k + 1));
		tmp[k] = '\0';
		j = 0;
		k = 0;
		while (tab[i].value[j] != '\0')
		{
			while (tab[i].value[j] == ' ' && tab[i].value[j + 1] == ' ')
				j++;
			tmp[k++] = tab[i].value[j++];
		}
		free (tab[i].value);
		tab[i].value = tmp;
		i++;
	}
	return (tab);
}
