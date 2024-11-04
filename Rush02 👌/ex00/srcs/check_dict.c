/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:02:08 by adelattr          #+#    #+#             */
/*   Updated: 2024/09/22 22:22:39 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	ft_check2(char *buffer, int i)
{
	while ((buffer[i] >= 9 && buffer[i] <= 13) || buffer[i] == 32)
		i++;
	if (buffer[i] == '+')
		i++;
	if (buffer[i] >= '0' && buffer[i] <= '9')
		while (buffer[i] >= '0' && buffer[i] <= '9')
			i++;
	else
		return (-1);
	if (buffer[i] == ' ')
		while (buffer[i] == ' ')
			i++;
	if (buffer[i] == ':')
		i++;
	else
		return (-1);
	if (buffer[i] == ' ')
		while (buffer[i] == ' ')
			i++;
	return (i);
}

int	ft_check_dict(int fd, int bytesr)
{
	char	buffer[1024];
	int		i;

	while (bytesr > 0)
	{
		bytesr = read(fd, buffer, sizeof(buffer));
		if (bytesr > 0)
		{
			i = 0;
			while (i < bytesr)
			{
				i = ft_check2(buffer, i);
				if (ft_char_is_printable(buffer[i]))
					while (buffer[i] && ft_char_is_printable(buffer[i]))
						i++;
				else
					return (0);
				if (buffer[i])
					while (buffer[i] == '\n')
						i++;
			}
		}
	}
	close(fd);
	return (1);
}
