/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epouros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 16:00:28 by epouros           #+#    #+#             */
/*   Updated: 2019/01/20 17:59:52 by djon-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_board_init(short size)
{
	char	**board;
	short	i;
	short	j;

	i = 0;
	j = 0;
	if (!(board = (char **)malloc(sizeof(char *) * size)))
		ft_exit();
	while (i < size)
	{
		board[i] = ft_strnew(size);
		while (j < size)
		{
			board[i][j] = '.';
			j++;
		}
		j = 0;
		i++;
	}
	return (board);
}
