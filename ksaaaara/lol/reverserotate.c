/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:46:54 by mcastrat          #+#    #+#             */
/*   Updated: 2025/01/10 16:02:13 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_stack **stack_a)
{
	t_stack	*firstnd;
	t_stack *lastnd;
	t_stack *newlast;
	
	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	firstnd = *stack_a;
	lastnd = getlastnode(stack_a);
	newlast = lastnd->prev;
	lastnd->next = firstnd;
	lastnd->prev = NULL;
	firstnd->prev = lastnd;
	if (newlast)
		newlast->next = NULL;
	*stack_a = lastnd;
	ft_printf("ra\n");
}
void	rrb(t_stack **stack_b)
{
	t_stack	*firstnd;
	t_stack *lastnd;
	t_stack *newlast;
	
	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	firstnd = *stack_b;
	lastnd = getlastnode(stack_b);
	newlast = lastnd->prev;
	lastnd->next = firstnd;
	lastnd->prev = NULL;
	firstnd->prev = lastnd;
	if (newlast)
		newlast->next = NULL;
	*stack_b = lastnd;
	ft_printf("rb\n");
}
void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_printf("rrr\n");
}