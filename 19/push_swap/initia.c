/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initia.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:21:22 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/20 20:00:34 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initstack(t_stack **stack, char **argv)
{
	int		i;
	long	nb;

	i = 0;
	while (argv[i])
	{
		if (checksyntax(argv[i]))
			freerror(stack);
		nb = belong(argv[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			freerror(stack);
		if (checkdbl(*stack, nb))
			freerror(stack);
		newnode(stack, nb);
		i++;
	}
}

/*check if there is a stack -> get the last nd say
that our nd is going to be the next last and link the new 
lst with the old one*/
void	newnode(t_stack **stack, long nb)
{
	t_stack	*nd;
	t_stack	*lastnd;

	if (!stack)
		return ;
	nd = malloc(sizeof(t_stack));
	if (!nd)
		return ;
	nd->data = nb;
	nd->next = NULL;
	nd->cheapest = NULL;
	if (!(*stack))
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

long	belong(char *nb)
{
	int		i;
	int		sign;
	long	newnb;

	i = 0;
	sign = 1;
	newnb = 0;
	while (nb[i] == 32 || (nb[i] >= 9 && nb[i] <= 13))
		i++;
	if (nb[i] == '-' || nb[i] == '+')
	{
		if (nb[i] == '-')
			sign = -1;
		i++;
	}
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		newnb = (newnb * 10) + (nb[i] - 48);
		i++;
	}
	return (newnb * sign);
}
