/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:29:39 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/28 15:39:30 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *out;

	if (!(out = (t_list*)malloc(sizeof(t_list))))
		return (0);
	out->next = NULL;
	out->data = data;
	return (out);
}
