/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsnode.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:06:00 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/07 12:26:45 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*getlastnode(t_stack *last)
{
	if (!last)
		return (NULL);
	while (last->next)
		last = last->next;
	return (last);
}

t_stack	*getbiggestnd(t_stack *stack)
{
	long	max;
	t_stack	*maxnd;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->data > max)
		{
			max = stack->data;
			maxnd = stack;
		}
		stack = stack->next;
	}
	return (maxnd);
}

t_stack	*getsmallestnd(t_stack *stack)
{
	long	min;
	t_stack	*minnd;

	min = LONG_MAX;
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->data < min)
		{
			min = stack->data;
			minnd = stack;
		}
		stack = stack->next;
	}
	return (minnd);
}

int	checknbrnode(t_stack *stack)
{
	int	i;

	i = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	notsorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (1);
		stack = stack->next;
	}
	return (0);
}
