/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:04:29 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/26 19:54:39 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_base(char *base)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || (base[i] >= 9
				&& base[i] <= 13) || base[i] == ' ')
		{
			return (1);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_in_base(char str, char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		signe;
	int		i;
	int		j;

	signe = 1;
	i = 0;
	j = 0;
	if (ft_base(base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (is_in_base(str[i], base) != -1 && str[i])
	{
		j = j * ft_strlen(base) + is_in_base(str[i], base);
		i++;
	}
	return (j * signe);
}

/*int main(void)
{
        char    base[] = "01234567";
        ft_atoi_base("---01234567", base);
	printf("%c",'\n');
	ft_atoi_base("-2a6", base);
	printf("%c",'\n');
	ft_atoi_base("--++-2147483647", base);
	printf("%c",'\n');
	ft_atoi_base("-+++-a26", base);
        return (0);
}*/
