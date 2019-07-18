/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:50:20 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/09 18:33:44 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str_s;
	unsigned char	sym;
	size_t			i;

	str_s = (unsigned char*)s;
	sym = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str_s[i] == sym)
			return (str_s + i);
		i++;
	}
	return (NULL);
}
