/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:32:29 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/07 12:22:25 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*pushnd;

	if (!*stack_b)
		return ;
	pushnd = *stack_b;
	*stack_b = (*stack_b)->next;
	if (*stack_b)
		(*stack_b)->prev = NULL;
	pushnd->prev = NULL;
	if (!*stack_a)
	{
		*stack_a = pushnd;
		pushnd->next = NULL;
	}
	else
	{
		pushnd->next = *stack_a;
		pushnd->next->prev = pushnd;
		*stack_a = pushnd;
	}
	ft_printf("pa\n");
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*pushnd;

	if (!*stack_a)
		return ;
	pushnd = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	pushnd->prev = NULL;
	if (!*stack_b)
	{
		*stack_b = pushnd;
		pushnd->next = NULL;
	}
	else
	{
		pushnd->next = *stack_b;
		pushnd->next->prev = pushnd;
		*stack_b = pushnd;
	}
	ft_printf("pb\n");
}
