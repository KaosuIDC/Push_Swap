/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:53:29 by sudelory          #+#    #+#             */
/*   Updated: 2025/02/09 01:08:37 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// Equivalent to rra
int	reverse_rot_a(t_init_stack *stack_a, t_init_stack *stack_b)
{
	int	temp;
	int	i;

	temp = stack_a->array[stack_a->size - 1];
	i = stack_a->size - 1;
	if (stack_a->size > 1)
	{
		while (i > 0)
		{
			stack_a->array[i] = stack_a->array[i - 1];
			i--;
		}
		stack_a->array[0] = temp;
		return (1);
	}
	return (0);
}

// Equivalent to rrb
int	reverse_rot_b(t_init_stack *stack_a, t_init_stack *stack_b)
{
	int	temp;
	int	i;

	temp = stack_b->array[stack_b->size - 1];
	i = stack_a->size - 1;
	if (stack_b->size > 1)
	{
		while (i > 0)
		{
			stack_b->array[i] = stack_b->array[i - 1];
			i--;
		}
		stack_b->array[0] = temp;
		return (1);
	}
	return (0);
}

// Equivalent ro rrr
int	reverse_rot_both(t_init_stack *stack_a, t_init_stack *stack_b)
{
	int	call_a;
	int	call_b;

	call_a = reverse_rot_a(stack_a, stack_b);
	call_b = reverse_rot_b(stack_a, stack_b);
	return (call_a && call_b);
}