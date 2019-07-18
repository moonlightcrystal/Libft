/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:12:14 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/12 22:17:19 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*orig;
	char		*purp;
	size_t		n;
	size_t		dlen;

	purp = dst;
	orig = src;
	n = size;
	while (n-- && *purp != '\0')
		purp++;
	dlen = purp - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(orig));
	while (*orig != '\0')
	{
		if (n != 1)
		{
			*purp++ = *orig;
			n--;
		}
		orig++;
	}
	*purp = '\0';
	return (dlen + (orig - src));
}
