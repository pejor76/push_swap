/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:05:49 by pecampos          #+#    #+#             */
/*   Updated: 2022/12/28 12:32:28 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack **stack1)
{
	t_stack	*temp;
	int		x;
	int		y;

	temp = (t_stack *)malloc(sizeof(t_stack));
	temp = (*stack1);
	y = temp->num;
	while (temp->next != NULL)
	{
		temp = temp->next;
		x = temp->num;
		temp->num = y;
		y = x;
	}
	(*stack1)->num = x;
	write(1, "rra\n", 4);
}
