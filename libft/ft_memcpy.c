/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:07:29 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/20 19:22:56 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *str;

	str = (unsigned char*)dst;
	if (dst == src)
		return (dst);
	while (n--)
		*str++ = *(unsigned char *)src++;
	return (dst);
}
