/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_creator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:38:26 by pecampos          #+#    #+#             */
/*   Updated: 2022/09/12 11:25:06 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*node_creator(void)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	node->next = NULL;
	node->num = 0;
	return (node);
}

t_stack	*stack_creator(int argc, char **argv)
{
	t_stack	*first;
	t_stack	*x;
	int		i;

	first = (t_stack *)malloc(sizeof(t_stack));
	x = (t_stack *)malloc(sizeof(t_stack));
	i = 1;
	first = node_creator();
	x = first;
	while (i < argc)
	{
		x->num = ft_atoi(argv[i]);
		if (i < argc - 1)
		{
			x->next = node_creator();
			x = x->next;
		}
		i++;
	}
	return (first);
}
