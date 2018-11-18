/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloctest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 14:20:56 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/18 15:43:05 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*new;
	char	*str;
	char	*ptr;

	if (argc != 2)
	{
		printf("Introduce a string.\n");
		return (0);
	}
	str = argv[1];
	new = ft_lstnew(str, ft_strlen(str));
	ptr = (char*)new->content;
	printf("%s", ptr);
	return (0);
}
