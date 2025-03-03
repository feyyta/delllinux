/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:54:17 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/07 12:26:12 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ro(t_stack **stack)
{
	t_stack	*lastnd;

	if (!(*stack) || !(*stack)->next)
		return ;
	lastnd = getlastnode(*stack);
	lastnd->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	lastnd->next->prev = lastnd;
	lastnd->next->next = NULL;
}

void	ra(t_stack **stack_a)
{
	ro(stack_a);
	ft_printf("ra\n");
}

void	rb(t_stack **stack_b)
{
	ro(stack_b);
	ft_printf("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ro(stack_a);
	ro(stack_b);
	ft_printf("rr\n");
}
