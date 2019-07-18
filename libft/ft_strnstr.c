/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 15:32:22 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/14 17:47:59 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)haystack;
	i = 0;
	if (!*needle)
		return (str);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] &&
			(haystack[i + j] == needle[j]) && ((i + j) < len))
			j++;
		if (!needle[j])
			return (str + i);
		i++;
	}
	return (NULL);
}
