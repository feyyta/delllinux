#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int ft_putchar(char c)
{
		write(1,&c,1);
		return 1;
}

int ft_putstr(char *str)
{
		int i = 0;
		while(str[i])
				i++;
		write(1,str,i);
		return i;
}

int ft_putnbr(int nb)
{
		int count = 0;
		if(nb < 0)
		{
				count += ft_putchar('-');
				nb = -nb;
		}
		if(nb >= 10)
		{
				count += ft_putnbr(nb / 10);
				count += ft_putchar(nb % 10 + 48);
		}
		else
				count += ft_putchar(nb % 10 + 48);
		return count;
}

int ft_hex(unsigned int nb)
{
		int count = 0;
		char *base = "0123456789abcdef";

		if(nb >= 16)
		{
				count += ft_hex(nb/16);
				count += ft_putchar(base[nb%16]);
		}
		else
				count += ft_putchar(base[nb%16]);
		return count;
}

int ft_check(const char c, va_list args)
{
		int count = 0;
		if(c == 'd')
			count += ft_putnbr(va_arg(args, int));
		if(c == 's')
			count += ft_putstr(va_arg(args, char *));
		if(c == 'x')
			count += ft_hex(va_arg(args, unsigned int));
		if(c == '%')
			count += ft_putchar('%');
		return count;
}

int ft_printf(const char *str, ...)
{
		int i = 0;
		int count = 0;
		va_list args;

		va_start(args, str);
		while(str[i])
		{
				if(str[i] == '%')
						count +=ft_check(str[++i], args);
				else
						ft_putchar(str[i]);
				i++;
		}
		va_end(args);
		return count;
}
int main()
{
    int n = 3682873;
    char c[] = "print ta race";
    int ct, ct1;

    ct = ft_printf("%s %x", c, n);
	write(1,"\n",1);
    ct1 = printf("%d %s %x",n,c, n);
    printf ("\n%d %d", ct, ct1);
	return 0;
}
