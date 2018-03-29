/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 12:33:53 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/16 13:37:55 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	char	a;
	char	b;
	int		c;
	int		l;

	l = 0;
	while (*str != '\0')
	{
		l++;
		str++;
	}
	c = 0;
	str = str - l;
	while (c < l / 2)
	{
		str = str + l - c;
		a = *str;
		str = str - l + c;
		b = *str;
		*str = a;
		str = str + l - c;
		*str = b;
		c++;
	}
	return (0);
}

int		main()
{
	char *a ="hello";
	printf("%s",ft_strrev(a));
	return(0);
}
