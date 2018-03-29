/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:02:48 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/21 17:03:45 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_ascii(char **val, int nb)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < (nb - 1))
	{
		j = 0;
		while (val[i][j] == val[i + 1][j])
			j++;
		if (val[i][j] > val[i + 1][j])
		{
			tmp = val[i];
			val[i] = val[i + 1];
			val[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}

int		main(int size, char **argv)
{
	int i;
	int j;

	i = 1;
	ft_sort_ascii(argv, size);
	while (i != size)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
