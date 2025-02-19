/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:14:41 by sudelory          #+#    #+#             */
/*   Updated: 2025/02/04 17:14:43 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stacks(t_init_stack *stack_a, t_init_stack *stack_b, int argc, char **argv)
{
	int	i;

	i = 0;
	stack_a->size = argc - 1;
	stack_a->array = malloc(stack_a->size * sizeof(int));
	stack_b->size = 0;
	stack_b->array = malloc(stack_a->size * sizeof(int));
	if (!stack_a->array || stack_b->array)
	{
		ft_printf(stderr, "Error\n");
		return (1);
	}
	while (i < stack_a->size)
	{
		stack_a->array[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_init_stack	stack_a;
	t_init_stack	stack_b;

	if (argc < 2)
	{
		ft_printf(stderr, "Error\n");
		return (1);
	}
	init_stacks(&stack_a, &stack_b, argc, argv);
	//Call algo
	free(stack_a.array);
	free(stack_b.array);
	return (0);
}
