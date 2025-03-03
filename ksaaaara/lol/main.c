/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:18:25 by mcastrat          #+#    #+#             */
/*   Updated: 2025/01/10 16:29:05 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int main(int argc, char **argv)
{
	char **args;
	t_stack *stack_a;
	//t_stack *stack_b;

	stack_a = NULL;
	//stack_b = NULL;
	args = startargs(argc, argv);// verif bien les arg si "" les extraire, les mettre en long et check les double
	initstack(&stack_a, args);// initalise la stack a avc les arg
	if (!maybesorted(stack_a))
		pushswap(&stack_a);
	// libere la memoire des stack a et b
	return (0);
}