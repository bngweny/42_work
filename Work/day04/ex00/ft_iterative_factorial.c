/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 15:49:09 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/18 10:58:14 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int fac;
	int count;

	if (nb < 0 || nb >=12)
	{
		return (0);
	}
	fac = 1;
	count = 1;
	while (count <= nb)
	{
		fac = fac*count;
		count++;
	}

	return fac;
}

int 		main()
{
	printf("%d",ft_iterative_factorial(0));
	return (0);
}
