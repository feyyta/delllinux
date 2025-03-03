/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 09:49:01 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/20 19:53:05 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	getsorted(t_stack **stack_a, t_stack **stack_b)
{
	if (checknbrnode(*stack_a) == 2)
		sa(stack_a);
	else if (checknbrnode(*stack_a) == 3)
		sorthree(stack_a);
	else
		sortstacks(stack_a, stack_b);
}

void	sorthree(t_stack **stack_a)
{
	t_stack	*bignd;

	bignd = getbiggestnd(*stack_a);
	if (*stack_a == bignd)
		ra(stack_a);
	else if ((*stack_a)->next == bignd)
		rra(stack_a);
	if ((*stack_a)->data > (*stack_a)->next->data)
		sa(stack_a);
}

void	sortstacks(t_stack **stack_a, t_stack **stack_b)
{
	int	len;

	len = checknbrnode(*stack_a);
	if (len-- > 3 && notsorted(*stack_a))
		pb(stack_a, stack_b);
	if (len-- > 3 && notsorted(*stack_a))
		pb(stack_a, stack_b);
	while (len-- > 3 && notsorted(*stack_a))
	{
		prepstacka(*stack_a, *stack_b);
		agob(stack_a, stack_b);
	}
	sorthree(stack_a);
	while (*stack_b)
	{
		prepstackb(*stack_a, *stack_b);
		bgoa(stack_a, stack_b);
	}
	mingotop(stack_a);
}
