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

void	*ft_strrev(char *str)
{
	int i;
	char strng[]="";
	int j=1;
	i = 0;
	while(*str != '\0')
	{
		i++;
		str++;
	}
	while(i > 0)
	{
		strng[j]=str[i+1];
		j++;
		i--;
	}
	return strng;

	
}

int		main()
{
	char *a ="hello";
	printf("%s",ft_strrev(a));
	return(0);
}
