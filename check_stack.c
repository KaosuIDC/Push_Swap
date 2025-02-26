/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:14:29 by sudelory          #+#    #+#             */
/*   Updated: 2025/02/26 00:31:51 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_empty(int size)
{
	return (size == 0);
}

int	check_entry_input(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_digit(str[i]) && str[i] != ' ' && str[i] != '-'
			&& str[i] != '+')
			return (0);
		if ((str[i] == '-' || str[i] == '+') && (!is_digit(str[i + 1]) || (i > 0
					&& str[i - 1] != ' ')))
			return (0);
		i++;
	}
	return (1);
}

int	check_duplicates(int *array, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] == array[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_range(char *str)
{
	long	num;

	num = ft_atol(str);
	return (num >= INT_MIN && num <= INT_MAX);
}

int	check_entry(char **argv)
{
	int	i;
	int	*array;
	int	size;

	i = 1;
	size = 0;
	while (argv[i])
	{
		if (!check_entry_input(argv[i]) || !check_range(argv[i]))
			return (0);
		size++;
		i++;
	}
	array = malloc(size * sizeof(int));
	if (!array)
		return (0);
	i = 0;
	while (i < size)
	{
		array[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	if (!check_duplicates(array, size))
	{
		free(array);
		return (0);
	}
	free(array);
	return (1);
}
