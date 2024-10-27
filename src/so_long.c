/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:56:44 by qacjl             #+#    #+#             */
/*   Updated: 2024/10/25 15:10:39 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	map_initialise(t_map *init, char *av)
{
	init->name = av;
	init->moves = 0;
	init->p = 0;
	init->c = 0;
	init->e = 0;
	init->player.x = 0;
	init->player.y = 0;

}


int	main(int ac, char **av)
{
	t_map init;
	int	fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
			ft_printf("Erreur de fichier\n");
		map_initialise(&init, av[1]);
		init.mlx = mlx_init();
		ft_map_init(&init, av[1]);
	}
	else
		ft_printf("Erreur, mauvais nombre d'argument");
}
