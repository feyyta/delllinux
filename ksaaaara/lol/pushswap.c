/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 21:30:32 by mcastrat          #+#    #+#             */
/*   Updated: 2025/01/10 16:35:59 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void pushswap(t_stack **stack_a)
{
	t_stack *tmp;
	
	if (checknbrnode(*stack_a) == 2)
	{
		sa(stack_a);
		tmp = *stack_a;
		while(tmp)
		{
			printf("stack after swap : %d\n", tmp->data);
			tmp = tmp->next;
		}
	}
	//else if (checknbrnode(*stack_a) == 3)
	//	sortree(stack_a);
}