/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:54:26 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/24 18:12:37 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_hexa(unsigned char str)
{
	const char		*hex;

	hex = "0123456789abcdef";
	write(1, &hex[str / 16], 1);
	write(1, &hex[str % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write (1, "\\", 1);
			ft_hexa(str[i]);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}
/*
int		main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	write (1, "\n", 1);
	ft_putstr_non_printable("");
	write (1, "\n", 1);
	ft_putstr_non_printable("£");
	write (1, "\n", 1);
	ft_putstr_non_printable("ÿ");
	write (1, "\n", 1);
	ft_putstr_non_printable("\x81\xbe");
}*/
