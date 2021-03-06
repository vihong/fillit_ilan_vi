/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_tetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 00:09:36 by vi-hong           #+#    #+#             */
/*   Updated: 2017/03/08 23:12:40 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	count_tetri(char *buf)
{
	int i;
	int nb_of_n;
	int nb_of_tetri;

	i = 0;
	nb_of_n = 0;
	nb_of_tetri = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
		{
			nb_of_n++;
			if (nb_of_n == 4)
			{
				nb_of_tetri++;
				nb_of_n = -1;
			}
		}
		i++;
	}
	return (nb_of_tetri);
}
