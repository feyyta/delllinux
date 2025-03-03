/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkutils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:14:12 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/20 20:00:15 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	checkdbl(t_stack *stack_a, long nb)
{
	while (stack_a)
	{
		if (stack_a->data == nb)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}

int	checksyntax(char *argv)
{
	int	i;

	i = 0;
	if (!argv)
		return (1);
	if (argv[i] == '-' || argv[i] == '+')
		i++;
	while (argv[i])
	{
		if (!(argv[i] >= '0' && argv[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

void	freestack(t_stack **stack)
{
	t_stack	*current;

	if (!stack)
		return ;
	while (*stack)
	{
		current = (*stack)->next;
		(*stack)->data = 0;
		free(*stack);
		(*stack) = current;
	}
	*stack = NULL;
}

void	freerror(t_stack **stack)
{
	ft_printf("Error");
	if (stack)
		freestack(stack);
	exit(0);
}
