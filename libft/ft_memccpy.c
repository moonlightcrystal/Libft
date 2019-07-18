/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:42:05 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/11 17:16:48 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *str_src;
	unsigned char *str_dst;
	unsigned char sym;

	str_src = (unsigned char*)src;
	str_dst = (unsigned char*)dst;
	sym = (unsigned char)c;
	while (n > 0 && *str_src != sym)
	{
		*str_dst++ = *str_src++;
		n--;
	}
	if (n > 0)
	{
		*str_dst++ = *str_src++;
		return (str_dst);
	}
	return (NULL);
}
