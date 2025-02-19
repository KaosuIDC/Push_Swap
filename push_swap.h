/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:32:21 by sudelory          #+#    #+#             */
/*   Updated: 2025/02/08 23:17:34 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
// Structure to initialize Stack
typedef struct init_stack
{
	int	*array;
	int	top;
	int	size;
	int	max_capacity;
}	t_init_stack;

int	check_if_empty(int size);
int	check_if_full(int capacity, int size);
int	fill_top_of_stack(int *top, int *array, int capacity, int element);
int	push_a(t_init_stack *stack_a, t_init_stack *stack_b);
int	push_b(t_init_stack *stack_a, t_init_stack *stack_b);
int	swap_a(t_init_stack *stack_a, t_init_stack *stack_b);
int	swap_b(t_init_stack *stack_a, t_init_stack *stack_b);
int	swap_both(t_init_stack *stack_a, t_init_stack *stack_b);
int	rotate_a(t_init_stack *stack_a, t_init_stack *stack_b);
int	rotate_b(t_init_stack *stack_a, t_init_stack *stack_b);
int	rotate_both(t_init_stack *stack_a, t_init_stack *stack_b);
int	reverse_rot_a(t_init_stack *stack_a, t_init_stack *stack_b);
int	reverse_rot_b(t_init_stack *stack_a, t_init_stack *stack_b);
int	reverse_rot_both(t_init_stack *stack_a, t_init_stack *stack_b);
#endif
