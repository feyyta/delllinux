/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:07:20 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/07 15:11:32 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				data;
	int				pos;
	int				pushcost;
	bool			upmedian;
	bool			cheapest;
	struct s_stack	*target;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

void				freesplit(char **splitted);
t_stack				*getlastnode(t_stack *last);
void				newnode(t_stack **stack, long nb);
long				belong(char *nb);
long				checkdbl(t_stack *stack, long nb);
int					checknbrnode(t_stack *stack);
t_stack				*getbiggestnd(t_stack *stack);
void				freerror(t_stack **stack);
void				freestack(t_stack **stack);
t_stack				*getsmallestnd(t_stack *stack);
int					checksyntax(char *argv);
int					notsorted(t_stack *stack);
void				initstack(t_stack **stack, char **args);
char				**ft_split(char const *s, char c);
void				getsorted(t_stack **stack_a, t_stack **stack_b);

void				sa(t_stack **stack_a);
void				sb(t_stack **stack_b);
void				ss(t_stack **stack_a, t_stack **stack_b);

void				sorthree(t_stack **stack_a);
void				sortstacks(t_stack **stack_a, t_stack **stack_b);
void				prepstacka(t_stack *stack_a, t_stack *stack_b);
void				agob(t_stack **stack_a, t_stack **stack_b);
void				bgoa(t_stack **stack_a, t_stack **stack_b);
void				mingotop(t_stack **stack_a);
t_stack				*whoischeapest(t_stack *stack);
void				checkpush(t_stack **stack, t_stack *cheapestnd, char check);
void				getindex(t_stack *stack);
void				findtargeta(t_stack *stack_a, t_stack *stack_b);
void				getcost(t_stack *stack_a, t_stack *stack_b);
void				getcheapest(t_stack *stack_a);
void				findtargetb(t_stack *stack_a, t_stack *stack_b);
void				prepstackb(t_stack *stack_a, t_stack *stack_b);

void				rro(t_stack **stack);
void				rra(t_stack **stack_a);
void				rrb(t_stack **stack_b);
void				rrr(t_stack **stack_a, t_stack **stack_b);

void				ro(t_stack **stack);
void				ra(t_stack **stack_a);
void				rb(t_stack **stack_b);
void				rr(t_stack **stack_a, t_stack **stack_b);

void				pa(t_stack **stack_a, t_stack **stack_b);
void				pb(t_stack **stack_a, t_stack **stack_b);

#endif
