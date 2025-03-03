/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:32:29 by mcastrat          #+#    #+#             */
/*   Updated: 2025/01/10 16:26:17 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "pushswap.h"

void pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *firstbnd;

	firstbnd = *stack_b;
	if (!(*stack_b))
		return ;
	if ((*stack_b)->next)
	{
		(*stack_b) = (*stack_b)->next;
		(*stack_b)->prev = NULL;
	}
	else
		(*stack_b) = NULL;
	if(*stack_a)
		(*stack_a)->prev = firstbnd;
	firstbnd->next = (*stack_a);
	(*stack_a) = firstbnd;
	ft_printf("pa\n");
}

void pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *firstand;

	firstand = *stack_a;
	if (!(*stack_a))
		return ;
	if ((*stack_a)->next)
	{
		(*stack_a) = (*stack_a)->next;
		(*stack_a)->prev = NULL;
	}
	else
		(*stack_a) = NULL;
	if(*stack_b)
		(*stack_b)->prev = firstand;
	firstand->next = (*stack_b);
	(*stack_b) = firstand;
	ft_printf("pb\n");
}*/
