/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 16:24:17 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/17 16:31:02 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int answer;
	int count;

	answer = 1;
	count = 0;
	while (count < power)
	{
		answer = answer * nb;
		count++;
	}
	return answer;
}

int		main(void)
{
	printf("%d", ft_iterative_power(2, 4));
	return (0);
}
