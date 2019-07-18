/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 21:19:32 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/16 16:24:10 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str_src;
	unsigned char	*str_dst;

	str_src = (unsigned char*)src;
	str_dst = (unsigned char*)dst;
	if (src == dst)
		return (dst);
	if (str_dst < str_src)
		while (len--)
			*str_dst++ = *str_src++;
	else
	{
		str_dst = str_dst + (len - 1);
		str_src = str_src + (len - 1);
		while (len--)
			*str_dst-- = *str_src--;
	}
	return (dst);
}
