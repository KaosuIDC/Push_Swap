/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 01:47:47 by sudelory          #+#    #+#             */
/*   Updated: 2025/02/26 06:22:25 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_for_three(t_init_stack *stack_a, t_init_stack *stack_b)
{
	int	first;
	int	second;
	int	third;

	first = stack_a->array[0];
	second = stack_a->array[1];
	third = stack_a->array[2];
	if (first < second && second > third && third > first)
	{
		perform_swap(stack_a, stack_b, "sa");
		perform_rotate(stack_a, stack_b, "ra");
	}
	else if (first > second && second > third)
	{
		perform_swap(stack_a, stack_b, "sa");
		perform_r_rot(stack_a, stack_b, "rra");
	}
	else if (first > second && second < third && first < third)
		perform_swap(stack_a, stack_b, "sa");
	else if (first > second && second < third && first > third)
		perform_rotate(stack_a, stack_b, "ra");
	else if (first < second && second > third && third < first)
		perform_r_rot(stack_a, stack_b, "rra");
}

void	sort_for_five(t_init_stack *stack_a, t_init_stack *stack_b)
{
	int	first;
	int	second;
	int	third;
	int	top_b;

	perform_push(stack_a, stack_b, "pb");
	perform_push(stack_a, stack_b, "pb");
	sort_for_three(stack_a, stack_b);
	first = stack_a->array[0];
	second = stack_a->array[1];
	third = stack_a->array[2];
	while (stack_b->size > 0)
	{
		top_b = stack_b->array[0];
		perform_push(stack_a, stack_b, "pa");
		if (top_b < first && top_b < second && top_b < third)
	}
}

void	choose_special_case(t_init_stack *stack_a, t_init_stack *stack_b,
		int arg_count)
{
	if (arg_count <= 4)
		sort_for_three(stack_a, stack_b);
	else
		sort_for_five(stack_a, stack_b);
}
