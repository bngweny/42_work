/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 12:07:49 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/20 16:25:39 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	int		flag;
	char	*temp;

	while (*str++ != '\0')
	{
		if (*str == *to_find)
		{
			temp = to_find;
			start = str;
			flag = 1;
			while (*temp != '\0')
			{
				if (*str++ != *temp++)
				{
					flag = 0;
					break ;
				}
			}
			if (flag == 1)
				return (start);
		}
	}
	return (0);
}
