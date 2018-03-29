/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 16:20:03 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/23 10:25:07 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0)
		printf("12.00 A.M. and 01.00 A.M.\n");
	else if (hour == 11)
		printf("11.00 A.M. and 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. and 01.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. and 12.00 A.M.\n");
	else
	{
		if (hour / 12 == 0)
			printf("%.2d.00 A.M. and %.2d.00 A.M.\n", hour % 12, hour % 12 + 1);
		else
			printf("%.2d.00 P.M. and %.2d.00 P.M.\n", hour % 12, hour % 12 + 1);
	}
}
