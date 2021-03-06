/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 17:38:34 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/20 17:40:19 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r');
}
