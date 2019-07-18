/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:08:39 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/20 19:22:33 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long int	number;
	int			minus;
	int			i;

	i = 0;
	number = 0;
	minus = 1;
	while (str[i] != '\0' && (ft_is_space(str[i])))
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		if (number * 10 / 10 != number && minus == 1)
			return (-1);
		else if (number * 10 / 10 != number && minus == -1)
			return (0);
		number = 10 * number + str[i] - '0';
		i++;
	}
	return ((int)(number * minus));
}
