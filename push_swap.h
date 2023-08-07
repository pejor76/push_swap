/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:42:48 by pecampos          #+#    #+#             */
/*   Updated: 2022/12/29 12:05:55 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <ctype.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}					t_stack;

int					ft_atoi(const char *str);
void				rr(t_stack **stack1);
t_stack				*stack_creator(int argc, char **argv);
int					s(t_stack *stack);
int					p(t_stack **stack1, t_stack **stack2);
void				r(t_stack **stack1);
int					comprobar(char **argv);
int					comprobar2(char **argv);
int					seleccionar(t_stack **stack1, t_stack **stack2, int x,
						int argc);
int	ordenar(t_stack **stack1, t_stack **stack2, int x, int argc)

#endif