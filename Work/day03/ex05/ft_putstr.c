/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 11:20:11 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/16 12:49:17 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while  (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(void)
{
	ft_putstr("hello");
	return (0);
}
