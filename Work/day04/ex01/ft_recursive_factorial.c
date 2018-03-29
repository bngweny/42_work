/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 16:20:23 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/17 18:26:45 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_recursive(int nb)
{
	if(nb == 0)
	{
		return (1);
	}
	else
	{
		return ft_recursive(nb-1)*nb;
	}
}

int		main(void)
{
	printf("%d",ft_recursive(4));
	return (0);
}
