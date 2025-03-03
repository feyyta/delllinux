/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:54:17 by mcastrat          #+#    #+#             */
/*   Updated: 2025/01/10 15:03:26 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "pushswap.h"

void	ra(t_stack **stack_a)// 42->1137->-21->NULL
{
	t_stack *firstnd;
	t_stack *lastnd;
	
	if (!(*stack_a) || !(*stack_a)->next)
		return;
	firstnd = stack_a;// 42
	lastnd = getlastnode(stack_a);//-21
	*stack_a = (*stack_a)->next;//1137->-21->NULL
	if (*stack_a)
		(*stack_a)->prev = NULL;//clean
	lastnd->next = firstnd;//1137->-21->42
	firstnd->prev = lastnd;//same
	firstnd->next = NULL;//1137->-21->42->NULL
	ft_printf("ra\n");
}

void	rb(t_stack **stack_b)// 42->1137->-21->NULL
{
	t_stack *firstnd;
	t_stack *lastnd;
	
	if (!(*stack_b) || !(*stack_b)->next)
		return;
	firstnd = stack_b;// 42
	lastnd = getlastnode(stack_b);//-21
	*stack_b = (*stack_b)->next;//1137->-21->NULL
	if (*stack_b)
		(*stack_b)->prev = NULL;//clean
	lastnd->next = firstnd;//1137->-21->42
	firstnd->prev = lastnd;//same
	firstnd->next = NULL;//1137->-21->42->NULL
	ft_printf("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_printf("rr\n");
}*/