/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 04:01:49 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/23 04:16:28 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if ((base % 2) == 0)
	{
		return (ft_collatz_conjecture(base / 2));
	}
	if ((base % 2) == 1)
	{
		return (ft_collatz_conjecture(base * 3 + 1));
	}
	return (0);
}
