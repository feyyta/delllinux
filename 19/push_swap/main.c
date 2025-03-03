/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:18:25 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/07 14:13:31 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freesplit(char **splitted)
{
	int	i;

	i = 0;
	while (splitted[i])
	{
		free(splitted[i]);
		splitted[i] = NULL;
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**splitted;

	splitted = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
	{
		splitted = ft_split(argv[1], ' ');
		initstack(&stack_a, splitted);
		freesplit(splitted);
		free(splitted);
		splitted = NULL;
	}
	else
		initstack(&stack_a, argv + 1);
	if (notsorted(stack_a))
		getsorted(&stack_a, &stack_b);
	freestack(&stack_a);
	return (0);
}
