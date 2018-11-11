/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:38:33 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/10 17:02:17 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	if (s1 == 0)
		return (0);
	i = 0;
	if (!(copy = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (i <= ft_strlen(s1))
	{
		copy[i] = s1[i];
		i++;
	}
	return (copy);
}
