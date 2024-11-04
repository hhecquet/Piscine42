/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelattr <adelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:07:42 by adelattr          #+#    #+#             */
/*   Updated: 2024/09/22 18:57:28 by adelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_is_singleton(t_value *tab, char *nb, int j)
{
	int	i;
	int	k;

	i = 0;
	while (i < j)
	{
		k = 0;
		while (tab[i].nb[k] == nb[k] && nb[k] != '\0')
			k++;
		if (tab[i].nb[k] == nb[k])
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_good(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i >= 2)
	{
		if (str[0] == '1' && i == 2)
			return (1);
		else
		{
			i = 1;
			while (str[i] == '0')
				i++;
			if ((str[i] > '0' && str[i] <= '9') || (str[0] != '1' && i > 2))
				return (0);
		}
	}
	return (1);
}

t_value	*ft_fill_struct2(t_value *tab, int tabsize, char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(t_value) * (tabsize));
	while (i < tabsize)
	{
		tab[i].nb = NULL;
		tab[i].value = NULL;
		i++;
	}
	i = 0;
	while (buffer[i] != '\0')
	{
		i = ft_tab_nb(tab, j, i, buffer);
		if (!ft_is_good(tab[j].nb) || !ft_is_singleton(tab, tab[j].nb, j))
		{
			free(tab[j].nb);
			free(tab[j--].value);
		}
		j++;
	}
	return (tab);
}

t_value	*ft_fill_struct(t_value *tab, unsigned int size, char *filename)
{
	char	*buffer;
	int		fd;
	int		i;
	int		tabsize;

	tabsize = 1;
	i = 0;
	fd = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * (size + 1));
	read(fd, buffer, size);
	buffer[size] = '\0';
	while ((unsigned int)i < size)
	{
		while (buffer[i] && buffer[i] != '\n')
			i++;
		if ((buffer[i] == '\n' || !buffer[i]) && ++tabsize)
			while (buffer[i] == '\n')
				i++;
		i++;
	}
	tab = ft_fill_struct2(tab, tabsize, buffer);
	free(buffer);
	return (tab);
}

t_value	*ft_create_tab(char *filename)
{
	t_value			*tab;
	unsigned int	buffersize;

	tab = NULL;
	buffersize = ft_count_size(filename);
	tab = ft_fill_struct(tab, buffersize, filename);
	return (tab);
}
