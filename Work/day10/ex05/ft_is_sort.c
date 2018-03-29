/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:08:09 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/27 16:13:23 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int desc;

	i = 0;
	desc = 1;
	if (f(tab[i], tab[i + 1]) <= 0)
	{
		desc = 0;
	}
	while (i < length - 1)
	{
		if (!(f(tab[i], tab[i + 1]) <= 0) && desc == 0)
			return (0);
		if (!(f(tab[i], tab[i + 1]) >= 0) && desc == 1)
			return (0);
		i++;
	}
	return (1);
}
