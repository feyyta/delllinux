#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	return (i);
}

int	ft_hex(unsigned int nb)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		count += ft_hex(nb / 16);
		count += ft_putchar(base[nb % 16]);
	}
	else
		count += ft_putchar(base[nb % 16]);
	return (count);
}
int ft_putnbr(int nb)
{
	int count = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		count++;
		nb = -nb;
	}
	if (nb >= 10)
	{
			count += ft_putnbr(nb /10);
			count += ft_putchar(nb % 10 + 48);
	}
	else
		count += ft_putchar(nb % 10 + '0');
	return (count);
}
int	check(const char str, va_list args)
{
	int	count;

	count = 0;
	if (str == 's')
		count += ft_putstr(va_arg(args, char *));
	if (str == 'd')
		count += ft_putnbr(va_arg(args, int));
	if (str == 'x')
		count += ft_hex(va_arg(args, unsigned int));
	if (str == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;
	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += check(str[i], args);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
int main()
{
    int n = 3682873;
    char c[] = "print ta race";
    int ct, ct1;

    ct = ft_printf("%d %s %x", n, c, n);
	write(1,"\n",1);
    ct1 = printf("%d %s %x",n,c, n);
    printf ("\n%d %d", ct, ct1);
	return 0;
}
