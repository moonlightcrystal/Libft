/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:03:20 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/16 18:18:09 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*pus;
	size_t	i;
	size_t	j;

	pus = NULL;
	i = 0;
	if (!s || !f)
		return (NULL);
	j = ft_strlen(s);
	if (!(pus = ft_strnew(j)))
		return (NULL);
	while (i < j)
	{
		pus[i] = (*f)(i, s[i]);
		i++;
	}
	return (pus);
}
