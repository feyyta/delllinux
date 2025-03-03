/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:39:33 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/07 12:26:34 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*dos;

	if (!(*stack) || !(*stack)->next)
		return ;
	dos = (*stack)->next;
	(*stack)->next = dos->next;
	if (dos->next)
		(*stack)->next->prev = *stack;
	(*stack)->prev = dos;
	dos->next = *stack;
	dos->prev = NULL;
	*stack = dos;
}

void	sb(t_stack **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	sa(t_stack **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
