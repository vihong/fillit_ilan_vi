/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_smallest_sq.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 00:09:33 by vi-hong           #+#    #+#             */
/*   Updated: 2017/03/09 02:34:14 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**get_smallest_sq(char **sq, int *sq_size, t_line **tetri1)
{
	bool	resp;

	resp = false;
	while (resp != true)
	{
		sq = create_sq(*sq_size);
		fill_with_dots(sq, *sq_size);
		resp = solver(sq, *sq_size, tetri1, 0);
		(*sq_size)++;
	}
	return (sq);
}
