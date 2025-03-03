/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:07:20 by mcastrat          #+#    #+#             */
/*   Updated: 2025/01/10 17:22:14 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "pprintf/ft_printf.h"
# include "llibft/libft.h"

typedef struct s_stack
{
    int data;
    int pos;
    struct s_stack *next;
    struct s_stack *prev;
} t_stack;

//init and check functions :
t_stack *getlastnode(t_stack *last);
void newnode(t_stack **stack, long nb);
long belong(char *nb);
int checkdbl(char **args, int nb, int pos);
char **startargs(int argc, char **argv);
void initstack(t_stack **stack, char **args);
void posnode(t_stack *stack);
int	maybesorted(t_stack *stack);
int checknbrnode(t_stack *stack);

//swap functions :
void	sa(t_stack **stack_a);
//void	sb(t_stack **stack_b);
//void	ss(t_stack **stack_a, t_stack **stack_b);

//sort function :
void pushswap(t_stack **stack_a);

//reverse rotate functions :
//void	rra(t_stack **stack_a);
//void	rrb(t_stack **stack_b);
//void	rrr(t_stack **stack_a, t_stack **stack_b);

//rotate functions :
//void	ra(t_stack **stack_a);
//void	rb(t_stack **stack_b);
//void	rr(t_stack **stack_a, t_stack **stack_b);

//push functions :
//void pa(t_stack **stack_a, t_stack **stack_b);
//void pb(t_stack **stack_a, t_stack **stack_b);

#endif
