/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:06:47 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/28 15:44:32 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*temp;
	int		count;

	count = 0;
	temp = begin_list;
	if (!temp)
		return (0);
	while (!(temp->next))
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
