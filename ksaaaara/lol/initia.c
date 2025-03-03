/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initia.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:21:22 by mcastrat          #+#    #+#             */
/*   Updated: 2025/01/06 21:31:25 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

char **startargs(int argc, char **argv)
{
	char **args;
	int i;
	long nb;

	i = 0;
	nb = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = argv + 1;
	while (args[i])
	{
		nb = belong(args[i]);
		printf("Arg[%d] => %ld\n", i, nb);
		if (nb > INT_MAX || nb < INT_MIN || checkdbl(args, nb, i))
			exit (1);
			//return (write(2, "Error\n", 6));
		i++;
	}
	return (args);
}

void initstack(t_stack **stack, char **args)
{
	int i;
	long nb;

	i = 0;
	nb = 0;
	while (args[i])
	{
		nb = belong(args[i]);
		newnode(stack, nb);
		printf("Added %ld to stack\n", nb);
		i++;
	}
	posnode(*stack);
}