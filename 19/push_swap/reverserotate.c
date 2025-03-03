/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:46:54 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/07 12:23:34 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rro(t_stack **stack)
{
	t_stack	*lastnd;

	if (!(*stack) || !(*stack)->next)
		return ;
	lastnd = getlastnode(*stack);
	lastnd->prev->next = NULL;
	lastnd->next = *stack;
	lastnd->prev = NULL;
	*stack = lastnd;
	lastnd->next->prev = lastnd;
}

void	rra(t_stack **stack_a)
{
	rro(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack_b)
{
	rro(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rro(stack_a);
	rro(stack_b);
	ft_printf("rrr\n");
}
