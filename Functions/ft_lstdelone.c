
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 14:42:02 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/18 15:46:30 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (!alst || !*alst)
	{
		alst = NULL;
		return ;
	}
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	alst = NULL;
}
