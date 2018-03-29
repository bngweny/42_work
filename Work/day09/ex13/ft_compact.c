/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 09:21:48 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/23 09:36:50 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int i;
	int index;

	i = 0;
	index = 0;
	while (++i < length)
	{
		if (tab[i] != '\0')
			tab[index++] = tab[i];
	}
	i = index;
	while (++i < length)
	{
		tab[i] = 0;
	}
	return (index);
}
