/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:45:41 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/16 14:13:33 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);

#endif

/*
#include "ft_point.h"
void set_point(t_point *point)
{
point->x = 42;
point->y = 21;
}

int main(void)
{
t_point point;
set_point(&point);
return (0);
}
*/
