/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsorta.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:01:07 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/20 20:01:19 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	set position at each nd and check wich 
	one is up and down the median
	set a target for each nd who
	 is the smallest close
	find the pushcost of each nd thanks
	 to the pos of the index and the len of the stack
*/
void	prepstacka(t_stack *stack_a, t_stack *stack_b)
{
	getindex(stack_a);
	getindex(stack_b);
	findtargeta(stack_a, stack_b);
	getcost(stack_a, stack_b);
	getcheapest(stack_a);
}

void	findtargeta(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*targetnd;
	t_stack	*currentb;
	long	best;

	while (stack_a)
	{
		best = LONG_MIN;
		currentb = stack_b;
		while (currentb)
		{
			if (currentb->data < stack_a->data && currentb->data > best)
			{
				best = currentb->data;
				targetnd = currentb;
			}
			currentb = currentb->next;
		}
		if (best == LONG_MIN)
			stack_a->target = getbiggestnd(stack_b);
		else
			stack_a->target = targetnd;
		stack_a = stack_a->next;
	}
}

/*if the nd is up the med his push cost is going to be
just his pos if not need to do len of the stack 
minus his pos, and do the same things for the target*/
void	getcost(t_stack *stack_a, t_stack *stack_b)
{
	int	lena;
	int	lenb;

	lena = checknbrnode(stack_a);
	lenb = checknbrnode(stack_b);
	while (stack_a)
	{
		stack_a->pushcost = stack_a->pos;
		if (!(stack_a->upmedian))
			stack_a->pushcost = lena - (stack_a->pos);
		if (stack_a->target->upmedian)
			stack_a->pushcost += stack_a->target->pos;
		else
			stack_a->pushcost += lenb - (stack_a->target->pos);
		stack_a = stack_a->next;
	}
}

/*to get the cheapest we need to go into all the stack
and find the smaller pushcost*/
void	getcheapest(t_stack *stack_a)
{
	t_stack	*cheapestnd;
	long	cheapestcost;

	if (!stack_a)
		return ;
	cheapestcost = LONG_MAX;
	while (stack_a)
	{
		if (stack_a->pushcost < cheapestcost)
		{
			cheapestcost = stack_a->pushcost;
			cheapestnd = stack_a;
		}
		stack_a = stack_a->next;
	}
	cheapestnd->cheapest = true;
}

/*before pushing b, get the cheapest nd then the nd 
in question need to be to the top of the stack ato be pushing
same for the target in the stack b*/
void	agob(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cheapestnd;

	cheapestnd = whoischeapest(*stack_a);
	checkpush(stack_a, cheapestnd, 'a');
	checkpush(stack_b, cheapestnd->target, 'b');
	pb(stack_a, stack_b);
}
