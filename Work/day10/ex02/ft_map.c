/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 13:37:10 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/27 16:01:30 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *out;

	out = malloc(sizeof(*tab) * length);
	i = 0;
	while (i < length)
	{
		out[i] = f(tab[i]);
		i++;
	}
	return (out);
}
