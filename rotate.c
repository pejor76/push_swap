/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:38:26 by pecampos          #+#    #+#             */
/*   Updated: 2022/12/28 12:32:36 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r(t_stack **stack1)
{
	t_stack	*temp;
	int		x;
	int		y;

	temp = (t_stack *)malloc(sizeof(t_stack));
	temp = (*stack1);
	x = temp->num;
	while (temp->next != NULL)
	{
		y = temp->next->num;
		temp->num = y;
		temp = temp->next;
	}
	temp->num = x;
	write(1, "ra\n", 3);
}
