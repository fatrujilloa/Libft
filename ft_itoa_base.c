/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:49:32 by ftrujill          #+#    #+#             */
/*   Updated: 2019/05/29 19:00:48 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	base_element(int n)
{
	if (n < 10)
		return ('0' + n);
	else
		return ('A' + n - 10);
}

char	*ft_itoa_base(unsigned long long value, int base)
{
	unsigned long long	n;
	char				*p;
	int					i;

	if (base <= 1 || base >= 17)
		return (0);
	n = value;
	if (!(p = (char*)malloc(sizeof(char) * 50)))
		return (0);
	i = 0;
	p[i] = base_element(n % base);
	i++;
	while (n / base > 0)
	{
		n = n / base;
		p[i] = base_element(n % base);
		i++;
	}
	p[i] = '\0';
	ft_strrev(p);
	return (p);
}
