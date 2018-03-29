/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:45:47 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/28 16:15:57 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*temp;

	temp = begin_list;
	if (!temp)
	{
		return (NULL);
	}
	else if (temp->next == NULL)
	{
		return (temp);
	}
	else
	{
		while (!(temp->next))
		{
			temp = temp->next;
			if (temp->next == NULL)
				return (temp);
		}
	}
}
