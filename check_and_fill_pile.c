/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_fill_pile.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:14:29 by sudelory          #+#    #+#             */
/*   Updated: 2025/02/07 14:25:51 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// Function to check if the stack is empty
int	check_if_empty(int size)
{
	return (size == 0);
}

// Function to check if the stack is full
int	check_if_full(int capacity, int size)
{
	return (size == capacity);
}

// Function to add an element to the top of the stack
int	fill_top_of_stack(int *top, int *array, int capacity, int element)
{
	if (check_if_full(capacity, *top + 1))
		return (-1);
	array[++(*top)] = element;
	return (0);
}
