/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:28:02 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/15 16:43:51 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2()
{
	int i,j,k,h;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				h = '0';
				while (h <= '9')
				{
					ft_putchar(i);
					ft_putchar(j);
					ft_putchar(' ');
					ft_putchar(k);
					ft_putchar(h);
					ft_putchar(',');
					h++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
