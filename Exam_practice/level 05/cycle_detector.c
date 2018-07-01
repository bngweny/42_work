/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 12:21:42 by bngweny           #+#    #+#             */
/*   Updated: 2018/07/01 12:25:57 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int		cycle_detector(t_list *list)
{
    t_list  *slow_p = list, *fast_p = list;
  
    while (slow_p && fast_p && fast_p->next )
    {
        slow_p = slow_p->next;
        fast_p  = fast_p->next->next;
        if (slow_p == fast_p)
        {
           return 1;
        }
    }
    return 0;
}
