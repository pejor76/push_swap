/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:05:49 by pecampos          #+#    #+#             */
/*   Updated: 2022/12/29 12:05:40 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	menor_numero(t_stack *stack)
{
	t_stack	*temp;
	int		x;

	temp = (t_stack *)malloc(sizeof(t_stack));
	temp = (stack);
	x = temp->num;
	while (temp->next != NULL)
	{
		temp = temp->next;
		if (x > temp->num)
			return (1);
	}
	return (0);
}

int	mayor_numero(t_stack *stack)
{
	t_stack	*temp;
	int		x;

	temp = (t_stack *)malloc(sizeof(t_stack));
	temp = (stack);
	x = temp->num;
	while (temp->next != NULL)
	{
		temp = temp->next;
		if (x > temp->num)
			return (1);
	}
	return (0);
}

int	selector(t_stack *stack)
{
	t_stack	*temp;
	int		x;
	int		pos;
	int		pos_act;

	temp = (t_stack *)malloc(sizeof(t_stack));
	temp = (stack);
	pos = 1;
	pos_act = 1;
	x = temp->num;
	while (temp->next != NULL)
	{
		temp = temp->next;
		pos_act++;
		if (x > temp->num)
		{
			x = temp->num;
			pos = pos_act;
		}
	}
	if (pos <= (pos_act / 2) + 1)
		return (1);
	return (0);
}

int	ordenar(t_stack **stack1, t_stack **stack2, int x, int argc)
{
	t_stack	*temp;

	temp = (*stack1);
	while (temp->next != NULL)
	{
		if (temp->num > temp->next->num && menor_numero(temp->next) == 0)
			s(temp);
		else if (temp->num < temp->next->num && menor_numero(temp) == 0)
		{
			if (menor_numero(temp->next) == 0)
				temp = temp->next;
			else
			{
				p(stack1, stack2);
				write(1, "pb\n", 3);
				x++;
				temp = (*stack1);
			}
		}
		else if (selector(temp) == 1)
			r(&temp);
		else if (selector(temp) == 0)
			rr(&temp);
	}
	return (x);
}

void	devolver(t_stack **stack1, t_stack **stack2, int x)
{
	while (x != 0)
	{
		p(stack2, stack1);
		x = x - 1;
		write(1, "pa\n", 3);
	}
	p(stack2, stack1);
}




int	main(int argc, char **argv)
{
	t_stack	*stack1;
	t_stack	*stack2;
	int		x;

	if (comprobar(argv) == 1 || comprobar2(argv) == 1)
	{
		write(1, "Error\n", 7);
		return (0);
	}
	stack1 = (t_stack *)malloc(sizeof(t_stack));
	stack2 = (t_stack *)malloc(sizeof(t_stack));
	stack1 = stack_creator(argc, argv);
	stack2 = NULL;
	x = 0;
	x = seleccionar(&stack1, &stack2, x, argc);
	devolver(&stack1, &stack2, x);
	free(stack1);
	free(stack2);
	return (0);
}
