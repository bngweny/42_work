/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 14:25:41 by bngweny           #+#    #+#             */	
/*   Updated: 2018/03/17 16:34:24 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int rows, int cols)
{
	int row;
	int col;

	row = 0;
	while (row < rows)
	{
		col = 0;
		while (col < cols)
		{
			if ((row == 0 && col == 0) || (row == rows - 1 && col  == cols - 1))
			{
				ft_putchar('A');
			}
			else if ((row == 0 && col == cols - 1)||(row == rows - 1 && col == 0))
			{
				ft_putchar('C');
			}
			else if (row == 0 || row == rows - 1 || col == cols - 1 || col == 0)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

int		main(void)
{
	rush(4, 4);
	return (0);
}
