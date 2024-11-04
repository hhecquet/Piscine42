/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:17:34 by adelattr          #+#    #+#             */
/*   Updated: 2024/09/22 22:23:44 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i])
		i++;
	if (s1[i] > s2[i])
		return (1);
	else if (s2[i] > s1[i])
		return (-1);
	else
		return (0);
}

void	ft_free_struct(t_value *tab)
{
	int	i;

	i = 0;
	while (tab[i].nb)
	{
		free (tab[i].nb);
		free (tab[i].value);
		i++;
	}
	if (tab)
		free(tab);
}

void	ft_swap_struct(t_value *tab1, t_value *tab2)
{
	t_value	tmp;

	tmp = *tab1;
	*tab1 = *tab2;
	*tab2 = tmp;
}

void	ft_sort_struct(t_value *tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i + 1].nb)
	{
		j = 0;
		while (tab[i].nb[j] == tab[i + 1].nb[j] && tab[i].nb[j] != '\0')
			j++;
		if (ft_strlen(tab[i].nb) > ft_strlen(tab[i + 1].nb))
		{
			ft_swap_struct(&tab[i], &tab[i + 1]);
			i = -1;
		}
		else if (tab[i].nb[j] > tab[i + 1].nb[j]
			&& ft_strlen(tab[i].nb) == ft_strlen(tab[i + 1].nb))
		{
			ft_swap_struct(&tab[i], &tab[i + 1]);
			i = -1;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int				fd;
	t_value			*tab;

	tab = NULL;
	if (argc == 2)
	{
		if (!ft_is_number(argv[1]))
			return (write(2, "Error\n", 6));
		fd = open("numbers.dict", O_RDONLY);
		if (fd < 0 || !ft_check_dict(fd, 1))
			write(2, "Dict Error", 10);
		else
		{
			if (!ft_is_number(argv[1]))
				return (write(2, "Error\n", 6));
			tab = ft_create_tab("numbers.dict");
			ft_sort_struct(tab);
			tab = ft_verif_value(tab, 0, 0, 0);
			ft_first(argv[1], tab);
			ft_free_struct(tab);
		}
	}
	else if (argc == 3)
		ft_do_3(0, argv[1], argv[2], tab);
	write(1, "\n", 1);
}
