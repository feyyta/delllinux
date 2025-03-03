/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:19:38 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/20 19:57:36 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*check who is up and down the median 
+ set an index on each node of the stack*/
void	getindex(t_stack *stack)
{
	int	index;
	int	med;

	index = 0;
	if (!stack)
		return ;
	med = checknbrnode(stack) / 2;
	while (stack)
	{
		stack->pos = index;
		if (index <= med)
			stack->upmedian = true;
		else
			stack->upmedian = false;
		stack = stack->next;
		index++;
	}
}

/*set up the pos , then until the smallest nd is on 
the top  we check if he is up or down de median*/
void	mingotop(t_stack **stack_a)
{
	getindex(*stack_a);
	while ((*stack_a)->data != getsmallestnd(*stack_a)->data)
	{
		if (getsmallestnd(*stack_a)->upmedian)
			ra(stack_a);
		else
			rra(stack_a);
	}
}

void	checkpush(t_stack **stack, t_stack *cheapestnd, char check)
{
	while (*stack != cheapestnd)
	{
		if (check == 'a')
		{
			if (cheapestnd->upmedian)
				ra(stack);
			else
				rra(stack);
		}
		else if (check == 'b')
		{
			if (cheapestnd->upmedian)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

t_stack	*whoischeapest(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
