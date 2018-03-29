/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 18:24:22 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/17 18:39:56 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
	{
		return (index);
	}
	else
	{
		return  ft_fibonacci(index-1) + ft_fibonacci(index-2);
	}
}

int		main(void)
{
		printf("%d",ft_fibonacci(7));
		return (0);
}
