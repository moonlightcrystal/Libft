/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 11:16:33 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/19 18:57:43 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *s)
{
	char		*str;
	size_t		start;
	size_t		end;
	size_t		i;

	if (s)
	{
		i = 0;
		start = 0;
		end = ft_strlen(s);
		while (check(s[start]))
			start++;
		if (s[start] == '\0')
			return (ft_strnew(0));
		while (check(s[end - 1]))
			end--;
		str = ft_strnew(end - start);
		if (str == NULL)
			return (NULL);
		while (start < end)
			str[i++] = s[start++];
		return (str);
	}
	return (NULL);
}
