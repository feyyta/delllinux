/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minit.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:23:57 by mcastrat          #+#    #+#             */
/*   Updated: 2025/01/29 15:46:14 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIT_H
# define MINIT_H

# include <unistd.h>
# include <stdio.h>
# include <signal.h>
# include <sys/types.h>

void	receptmess(int sigval);
void	putpid(int pid);
void	ft_putchar(char c);
void	ft_putstr(char *str);


#endif

