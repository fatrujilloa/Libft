/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 22:34:18 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/11 14:58:45 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	h_len;
	size_t	n_len;
	size_t	i;
	size_t	j;

	h_len = ft_strlen(haystack);
	n_len = ft_strlen(needle);
	if (n_len == 0)
		return ((char*)haystack);
	i = 0;
	while (i < h_len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j < n_len)
			j++;
		if (j == n_len)
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
