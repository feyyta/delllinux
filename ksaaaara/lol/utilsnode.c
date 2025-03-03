/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsnode.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:06:00 by mcastrat          #+#    #+#             */
/*   Updated: 2025/01/10 15:38:41 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void newnode(t_stack **stack, long nb)
{
	t_stack *nd;
	t_stack *lastnd;

	if (!stack)
		return ;
	nd = malloc(sizeof (t_stack));
	if (!nd)
		return ;
	nd->data = nb;
	nd->next = NULL;
	if (!*stack)
	{
		*stack = nd;
		nd->prev = NULL;
	}
	else
	{
		lastnd = getlastnode(*stack);
		lastnd->next = nd;
		nd->prev = lastnd;
	}
}

t_stack *getlastnode(t_stack *last)
{
	if (!last)
		return (NULL);
	while (last->next)
		last = last->next;
	return (last);
}
void posnode(t_stack *stack)
{
	t_stack *cpynd;
	t_stack *first;
	int	count;

	first = stack;
	while (stack)
	{
		count = 0;
		cpynd = first;
		while (cpynd)
		{
			if (stack->data > cpynd->data)
				count++;
			cpynd = cpynd->next;
		}
		stack->pos = count;
		stack = stack->next;
	}
}