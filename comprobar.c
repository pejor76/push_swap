/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comprobar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:05:49 by pecampos          #+#    #+#             */
/*   Updated: 2022/12/29 11:02:55 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	comprobar(char **argv)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (argv[y] != NULL)
	{
		while (argv[y][x] != 0)
		{
			if (argv[y][x] < 48 || argv[y][x] > 57)
			{
				if(argv[y][x] != '-')
					return (1);
			}
			x++;
		}
		y++;
		x = 0;
	}
	return (0);
}

int	comprobar2(char **argv)
{
	int	x;
	int	y;

	y = 1;
	x = y+1;
	while (argv[y] != NULL)
	{
		while (argv[x] != NULL)
		{
			if (ft_atoi(argv[x]) ==  ft_atoi(argv[y]))
				return (1);
			x++;
		}
		y++;
		x = y+1;
	}
	return (0);
}
