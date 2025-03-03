/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkutils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:14:12 by mcastrat          #+#    #+#             */
/*   Updated: 2025/01/10 15:08:49 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "pushswap.h"

long belong(char *nb)
{
	int i;
	int sign;
	long newnb;
	
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
	return(newnb * sign);
}
int checkdbl(char **args, int nb, int pos)
{
	int i;
	int check;

	i = 0;
	while (i < pos)
	{
		check = belong(args[i]);
		if (check == nb)
		{
			printf("dbl founded kidoo : %d", nb);
			return (1);
		}
		i++;
	}
	return (0);
}
int	maybesorted(t_stack *stack)
{
	const t_stack *tmp;//juste pour etre sur que la valeur de la stack ne soit pas modifiable

	tmp = stack;
	while (tmp && tmp->next)
	{
		if (tmp->pos > tmp->next->pos)
			return (0);
		tmp = tmp->next;
	}	
	return (1);
}
int checknbrnode(t_stack *stack)
{
	int i;
	const t_stack *tmp;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
