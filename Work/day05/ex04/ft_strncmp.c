/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 10:30:54 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/20 16:21:34 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		if (s1[count] < s2[count])
		{
			return (-1);
		}
		else if (s1[count] > s2[count])
		{
			return (1);
		}
		count++;
	}
	return (0);
}
