/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:39:33 by mcastrat          #+#    #+#             */
/*   Updated: 2025/01/10 15:10:44 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_stack **stack_a)
{
	t_stack *dos;

	dos = (*stack_a)->next;
	(*stack_a)->next = dos->next;
	if (dos->next)
		(*stack_a)->next->prev = *stack_a;
	(*stack_a)->prev = dos;
	dos->next = *stack_a;
	dos->prev = NULL;
	*stack_a = dos;
	ft_printf("sa\n");
}
/*void	sb(t_stack **stack_b)// 22 45
{
	t_stack *dos;

	dos = (*stack_b)->next;//45
	(*stack_b)->next = dos->next;//22 -> NULL
	if (dos->next)
		(*stack_b)->next->prev = *stack_b;
	(*stack_b)->prev = dos;
	dos->next = *stack_b;
	dos->prev = NULL;
	*stack_b = dos;
	ft_printf("sb\n");
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_printf("ss\n");
}*/