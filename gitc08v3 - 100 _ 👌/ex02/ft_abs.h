/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:19:05 by hhecquet          #+#    #+#             */
/*   Updated: 2024/09/25 17:11:13 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) 			\
({					            \
	int	abs;			        \
	if (Value > 0)			    \
		abs = Value;		    \
	else				        \
		abs = -Value;		    \
	abs;				        \
})

#endif

/*
#include "ft_abs.h"
#include <stdio.h>
int main(void)
{
        printf("%d",ABS(-42));
        return (0);
}
*/
