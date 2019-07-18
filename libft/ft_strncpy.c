/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:15:25 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/14 20:39:07 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	i2;

	i2 = 0;
	i = 0;
	while (i < len)
	{
		if (*(src + i2))
			*(dst + i) = *(src + i2++);
		else
			*(dst + i) = '\0';
		i++;
	}
	return (dst);
}
