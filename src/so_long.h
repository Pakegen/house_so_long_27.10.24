/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:50:02 by qacjl             #+#    #+#             */
/*   Updated: 2024/10/27 14:18:45 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../utils/libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include <X11/X.h>
# include <X11/keysym.h>

# define NOTHING "../texture/BACKGROUND.xpm"
# define WALL "../texture/WALL.xpm"
# define COLLECTIBLE "../texture/piece.xpm"
# define EXIT "../texture/flag.xpm"
# define START  "/../player.xpm


typedef struct s_map
{
	void	*map;
	void	*mlx;
	char	*name;
}	t_map;

typedef struct s_affichage
{
	
}
typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*player;
	void	*p_x;
	void	*p_y;
	char	*player_down;
	char	*player_left;
	char	*player_top;
	char	*player_right;
	t_map	*map;
}	t_data;


//INPUT

# define KEY_W =
# define KEY_A =
# define KEY_S =
# define KEY_D =
# define ARROW_UP =
# define ARROW_LEFT =
# define ARROW_DOWN =
# define ARROW_RIGHT =
# define ESC = 65307

//FOR THE MAP BER

# define WALL = 1
# define COLLECTIBLE = C
# define NOTHING = 0
# define START_POSITION = P
# define EXIT = E

#endif
