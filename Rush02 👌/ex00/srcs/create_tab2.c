/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelattr <adelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:11:33 by adelattr          #+#    #+#             */
/*   Updated: 2024/09/22 20:17:17 by adelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

unsigned long	ft_count_size(char *filename)
{
	char			buffer[1024];
	unsigned long	i;
	int				fd;
	int				bytesr;

	bytesr = 1;
	i = 0;
	fd = open(filename, O_RDONLY);
	while (bytesr > 0)
	{
		bytesr = read(fd, buffer, 1);
		if (bytesr > 0)
			i += bytesr;
	}
	close (fd);
	return (i);
}

int	ft_tab_value(t_value *tab, int j, int i, char *buffer)
{
	int	k;

	while (buffer[i] != '\n' && buffer[i] != '\0')
	{
		while (buffer[i] == ' ')
			i++;
		if (ft_char_is_printable(buffer[i]))
		{
			k = 0;
			while (ft_char_is_printable(buffer[i]) && ++k)
				i++;
			tab[j].value = malloc(sizeof(char) * (k + 1));
			tab[j].value[k] = '\0';
			i = i - k;
			k = 0;
			while (ft_char_is_printable(buffer[i]))
				tab[j].value[k++] = buffer[i++];
		}
		else
			i++;
	}
	if (buffer[i])
		i++;
	return (i);
}

int	ft_tab_nb(t_value *tab, int j, int i, char *b)
{
	int	k;

	while (b[i] != ':' && b[i])
	{
		if (b[i] >= '0' && b[i] <= '9')
		{
			while (b[i] == '0' && b[i + 1] >= '0' && b[i + 1] <= '9')
				i++;
			k = 0;
			while (b[i] >= '0' && b[i] <= '9' && ++k)
				i++;
			tab[j].nb = malloc(sizeof(char) * (k + 1));
			i = i - k;
			while (k >= 0)
				tab[j].nb[k--] = '\0';
			k = 0;
			while (b[i] >= '0' && b[i] <= '9')
				tab[j].nb[k++] = b[i++];
		}
		else
			i++;
	}
	i++;
	i = ft_tab_value(tab, j, i, b);
	return (i);
}
