/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:58:25 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/18 13:11:26 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ran;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	ran = malloc(sizeof(int) * (max - min));
	if (!ran)
	{
		return (-1);
	}
	while (min + i <= (max -1))
	{
		ran[i] = min + i;
		i++;
	}
	*range = ran;
	return (max - min);
}

#include <stdio.h>
int	main(void)
{
	int *range;
	
	printf("%d\n", ft_ultimate_range(&range, 0, 5));
	printf("%d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
}
