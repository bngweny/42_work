/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 07:00:17 by bngweny           #+#    #+#             */
/*   Updated: 2018/03/23 07:13:09 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS	1
# include <string.h>

typedef struct	s_perso
{
	char	*name;
	float	life;
	int		age;
	int		profession;
}				t_perso;

#endif
