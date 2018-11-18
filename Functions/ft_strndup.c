/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:38:33 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/18 14:30:29 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Allocates at most n bytes of memory with malloc and makes a copy of 
** the first n bytes in memory area src
 */

char	*ft_strndup(const char *s1, size_t n)
{
	char	*copy;
	size_t	i;

	if (!(copy = (char*)malloc(MIN(ft_strlen(s1), n) + 1)))
		return (NULL);
	i = 0;
	while (i <= ft_strlen(s1))
	{
		copy[i] = s1[i];
		i++;
	}
	return (copy);
}
