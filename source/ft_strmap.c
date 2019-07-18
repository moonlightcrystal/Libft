/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:31:56 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/15 18:00:17 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*pus;
	size_t	i;
	size_t	j;

	pus = NULL;
	i = 0;
	j = 0;
	if (!s || !f)
		return (NULL);
	j = ft_strlen(s);
	pus = ft_strnew(j);
	if (pus == NULL)
		return (NULL);
	while (i < j)
	{
		pus[i] = (*f)(s[i]);
		i++;
	}
	return (pus);
}
