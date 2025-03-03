/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:44:02 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/20 13:45:24 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdio.h>
# include <sys/types.h>
# include <unistd.h>
 
void	receptmess(int sigval);
void	ft_putstr(char *str);
void	setstr(char *str);
void	ft_putchar(char c);
void	putpid(int pid);
int		ft_atoi(const char *str);
void	sendsig(int pid, char *str);

#endif