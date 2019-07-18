/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:23:50 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/19 18:58:52 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(int n)
{
	int	l;

	l = 0;
	if (n <= 0)
		l = l + 1;
	while (n != 0)
	{
		l++;
		n = n / 10;
	}
	return (l);
}

char		*ft_itoa(int n)
{
	int			neg;
	int			i;
	char		*str;

	neg = 1;
	i = 0;
	i = ft_count(n);
	str = ft_strnew(i);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		neg = neg * -1;
	}
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[--i] = n % 10 * neg + '0';
		n = n / 10;
	}
	return (str);
}
