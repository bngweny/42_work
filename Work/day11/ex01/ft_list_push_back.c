/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:04:04 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/28 16:07:39 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *out;

	out->next = NULL;
	out->data = data;
	return (out);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp;

	temp = *begin_list;
	if (!temp)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		while (!(temp->next))
		{
			temp = temp->next;
		}
		temp->next = ft_create_elem(data);
	}
}
