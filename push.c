/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:38:26 by pecampos          #+#    #+#             */
/*   Updated: 2022/12/28 12:09:13 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	p(t_stack **stack1, t_stack **stack2)
{
	t_stack	*temp;

	if ((*stack1) == NULL)
	{
		return (0);
	}
	temp = NULL;
	if (*stack2 == NULL)
	{
		*stack2 = (t_stack *)malloc(sizeof(t_stack));
		(*stack2)->num = (*stack1)->num;
		(*stack2)->next = NULL;
		(*stack1) = (*stack1)->next;
	}
	else
	{
		temp = (t_stack *)malloc(sizeof(t_stack));
		temp->num = (*stack1)->num;
		temp->next = (*stack2);
		(*stack2) = temp;
		(*stack1) = (*stack1)->next;
	}
	return (0);
}
