# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 01:23:46 by hhecquet          #+#    #+#              #
#    Updated: 2024/09/25 01:40:53 by hhecquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wextra -Wall -Werror ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar csr libft.a *.o