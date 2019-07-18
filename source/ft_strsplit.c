/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 16:34:22 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/20 19:21:32 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**gap;
	int		i;
	int		i2;

	if (!s || !(gap = (char **)ft_memalloc(sizeof(char *)
		* (ft_sumw(s, c) + 1))))
		return (NULL);
	i2 = 0;
	gap[ft_sumw(s, c) + 1] = NULL;
	while (*s)
	{
		i = 0;
		s = ft_point_w(s, c);
		if (*s && !(gap[i2] = (char *)ft_strnew(sizeof(char) * (ft_sw(s, c)))))
		{
			while (i2--)
				free(gap[i2]);
			free(gap);
			return (NULL);
		}
		while (*s != c && *s)
			gap[i2][i++] = *s++;
		i2++;
	}
	return (gap);
}
