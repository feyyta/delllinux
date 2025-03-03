/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:26:25 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/20 13:56:31 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putpid(int pid)
{
	if (pid > 9)
		putpid(pid / 10);
	ft_putchar(pid % 10 + '0');	
}

void	receptmess(int sigval)
{
	static char byte;
	static int i;

	if (!i)
		i = 0;
	if (sigval == SIGUSR1)
	{
		byte = (byte << 1) | 0;
		i++;
	}
	else if (sigval == SIGUSR2)
	{
		byte = (byte << 1) | 1;
		i++;
	}
	if (i == 8)
	{
		ft_putchar(byte);
		byte = 0;
		i = 0;
	}
}

int main()
{
	pid_t pid;
	
	pid = getpid();
	ft_putstr("My pid = ");
	putpid(pid);
	ft_putchar('\n');
	signal(SIGUSR1, receptmess);
	signal(SIGUSR2, receptmess);
	while(1)
	{
		sleep(1);
	}
	return 0;
}
