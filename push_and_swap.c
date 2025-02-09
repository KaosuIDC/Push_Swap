/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_and_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:31:24 by sudelory          #+#    #+#             */
/*   Updated: 2025/02/09 01:06:15 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// Equivalent to pa
int	push_a(t_init_stack *stack_a, t_init_stack *stack_b)
{
	if (!check_if_empty(stack_b->size))
	{
		stack_a->array[stack_a->size] = stack_b->array[stack_b->size - 1];
		stack_a->size++;
		stack_b->size--;
		return (1);
	}
	return (0);
}

// Equivalent to pb
int	push_b(t_init_stack *stack_a, t_init_stack *stack_b)
{
	if (!check_if_empty(stack_a->size))
	{
		stack_b->array[stack_b->size] = stack_a->array[stack_a->size - 1];
		stack_b->size++;
		stack_a->size--;
		return (1);
	}
	return (0);
}

// Equivalent to sa
int	swap_a(t_init_stack *stack_a, t_init_stack *stack_b)
{
	int	temp;

	temp = stack_a->array[stack_a->size - 1];
	if (stack_a->size > 1)
	{
		stack_a->array[stack_a->size - 1] = stack_a->array[stack_a->size - 2];
		stack_a->array[stack_a->size - 2] = temp;
		return (1);
	}
	return (0);
}

// Equivalent to sb
int	swap_b(t_init_stack *stack_a, t_init_stack *stack_b)
{
	int	temp;

	temp = stack_b->array[stack_b->size - 1];
	if (stack_b->size > 1)
	{
		stack_b->array[stack_b->size - 1] = stack_b->array[stack_b->size - 2];
		stack_b->array[stack_b->size - 2] = temp;
		return (1);
	}
	return (0);
}

// Equivalent to ss
int	swap_both(t_init_stack *stack_a, t_init_stack *stack_b)
{
	int	call_a;
	int	call_b;

	call_a = swap_a(stack_a, stack_b);
	call_b = swap_b(stack_a, stack_b);
	return (call_a && call_b);
}
