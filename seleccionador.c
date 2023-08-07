/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seleccionador.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 10:00:52 by pecampos          #+#    #+#             */
/*   Updated: 2022/12/29 12:06:02 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ordena_esp(t_stack **stack1, t_stack **stack2)
{
	t_stack	*temp;

	temp = (t_stack *)malloc(sizeof(t_stack));
	temp = *(stack1);

	if(temp->num > temp->next->num && temp->num > temp->next->next->num && temp->next->num > temp->next->next->num)
	{
		s(temp);
		rr(&temp);
	}else if(temp->num > temp->next->num && temp->num > temp->next->next->num && temp->next->num < temp->next->next->num)
		r(&temp);
	else if(temp->num < temp->next->num && temp->num > temp->next->next->num && temp->next->num > temp->next->next->num)
		rr(&temp);
	else if(temp->num > temp->next->num && temp->num < temp->next->next->num && temp->next->num < temp->next->next->num)
		s(temp);
	else if(temp->num < temp->next->num && temp->num < temp->next->next->num && temp->next->num > temp->next->next->num)
	{
		p(&temp, stack2);
		write(1, "pb\n", 3);
		temp = (*stack1);
		s(temp);
		p(stack2, stack1);
		write(1, "pa\n", 3);
		temp = (*stack1);
	}
}

int	seleccionar(t_stack **stack1, t_stack **stack2, int x, int argc)
{
	int res;

	res = 0;
	if (argc == 4)
	{
		ordena_esp(stack1, stack2);
	}
	else
	{
		res = ordenar(stack1, stack2, x, argc);
	}
	return (res);
}