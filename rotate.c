/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:24:00 by sudelory          #+#    #+#             */
/*   Updated: 2025/02/09 01:07:43 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// Equivalent to ra
int	rotate_a(t_init_stack *stack_a, t_init_stack *stack_b)
{
	int	temp;
	int	i;

	temp = stack_a->array[0];
	i = 0;
	if (stack_a->size > 1)
	{
		while (i < stack_a->size - 1)
		{
			stack_a->array[i] = stack_a->array[i + 1];
			i++;
		}
		stack_a->array[stack_a->size - 1] = temp;
		return (1);
	}
	return (0);
}

// Equivalent to rb
int	rotate_b(t_init_stack *stack_a, t_init_stack *stack_b)
{
	int	temp;
	int	i;

	temp = stack_b->array[0];
	i = 0;
	if (stack_b->size > 1)
	{
		while (i < stack_b->size - 1)
		{
			stack_b->array[i] = stack_b->array[i + 1];
			i++;
		}
		stack_b->array[stack_b->size - 1] = temp;
		return (1);
	}
	return (0);
}

// Equivalent to rr
int	rotate_both(t_init_stack *stack_a, t_init_stack *stack_b)
{
	int	call_a;
	int	call_b;

	call_a = rotate_a(stack_a, stack_b);
	call_b = rotate_b(stack_a, stack_b);
	return (call_a && call_b);
}
