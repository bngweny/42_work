/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:37:14 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/28 16:45:34 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list *out;

	out->next = NULL;
	out->data = data;
	return (out);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *head;
	t_list *newhead;

	head = *begin_list;
	if (!head)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		newhead = ft_create_elem(data);
		newhead->next = *begin_list;
		*begin_list = newhead;
	}
}
