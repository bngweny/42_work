/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 16:32:04 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/17 16:41:29 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power == 1)
	{
		return (nb);
	}
	else
	{
		return (ft_recursive_power(nb, power-1) * nb);
	}
}

int		main(void)
{
	printf("%d", ft_recursive_power(3, 0));
	return (0);
}
