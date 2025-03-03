/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:23:30 by mcastrat          #+#    #+#             */
/*   Updated: 2025/02/20 13:54:24 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int ft_atoi(const char *str)
{
	int i = 0;
	char sign;
	int nb = 0;

	while ((str[i] >= 9 && str[i] <= 13 )|| str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = '-';
		i++;
	}
	else if (str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (sign == '-')
		nb = nb * -1;
	return nb;
	
}

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	setstr(char *str)
{
	int i = 0;
	
	while(str[i])
		i++;
	str[i] = '\n';
	str[i + 1] = '\0';
		
}
void	sendsig(int pid, char *str)
{
	int i;
	int bit;

	i = 0;
	setstr(str);
	while(str[i])
	{
		bit = 7;
		while (bit >= 0)
		{
			if((str[i] >> bit) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			bit--;
			usleep(500);
		}
		i++;
	}
	ft_putstr("Sended\n");
}

int main(int argc, char **argv)
{
	int pid;
	
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		sendsig(pid, argv[2]);
	}
	else
	{
		ft_putstr("Error");
		return(1);
	}
	return (0);
}
