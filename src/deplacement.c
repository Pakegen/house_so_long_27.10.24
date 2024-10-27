/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deplacement.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:44:42 by qacjl             #+#    #+#             */
/*   Updated: 2024/10/21 11:45:27 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	ft_move_up()
{
	if (1 > 2)
	{}
}


int touche(int key, t_data  *init)
{
	if (key == 65307)
	{
		mlx_close(init);
	}
	else if (key == 65361 || key == 97)
		ft_move_left(init);
	else if (key == 65362 || key == 119)
		ft_move_up(init);
	else if (key == 65363 || key == 100)
		ft_move_right(init);
	else if (key == 65364 || key == 115)
		ft_move_down(init);
	return (0);
}
