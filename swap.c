/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:38:26 by pecampos          #+#    #+#             */
/*   Updated: 2022/12/28 12:55:11 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	s(t_stack *stack)
{
	int	num1;
	int	num2;

	if (stack->next == NULL)
		return (0);
	num1 = stack->num;
	num2 = stack->next->num;
	(*stack).num = num2;
	(*stack).next->num = num1;
	write(1, "sa\n", 3);
	return (1);
}
