/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 14:44:08 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/22 14:55:33 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	src_iterator;
	int	dest_iterator;

	src_iterator = 0;
	dest_iterator = 0;
	while (src[src_iterator] != '\0')
		dest[dest_iterator++] = src[src_iterator++];
	dest[dest_iterator] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str)
	{
		l++;
		str++;
	}
	return (l);
}

char	*ft_strdup(char *str)
{
	char	*ret;

	ret = (char*)malloc(sizeof(char) * ft_strlen(str));
	ret = ft_strcpy(ret, str);
	return (ret);
}
