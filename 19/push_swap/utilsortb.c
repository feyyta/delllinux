/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsortb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:15:51 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/20 20:01:29 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*	set position at each nd and check wich 
	one is up and down the median
	set a target for each nd who
	is the biggest closest */
void	prepstackb(t_stack *stack_a, t_stack *stack_b)
{
	getindex(stack_a);
	getindex(stack_b);
	findtargetb(stack_a, stack_b);
}

void	findtargetb(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*targetnd;
	t_stack	*currenta;
	long	best;

	while (stack_b)
	{
		best = LONG_MAX;
		currenta = stack_a;
		while (currenta)
		{
			if (currenta->data > stack_b->data && currenta->data < best)
			{
				best = currenta->data;
				targetnd = currenta;
			}
			currenta = currenta->next;
		}
		if (best == LONG_MAX)
			stack_b->target = getsmallestnd(stack_a);
		else
			stack_b->target = targetnd;
		stack_b = stack_b->next;
	}
}

/*put the target of the stack b on the top before pushing then pa*/
void	bgoa(t_stack **stack_a, t_stack **stack_b)
{
	checkpush(stack_a, (*stack_b)->target, 'a');
	pa(stack_a, stack_b);
}
