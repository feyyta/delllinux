#include <unistd.h>

int verif(char *str, char c, int pos)
{
	int i = 0;
	while(i < pos)
	{
		if(str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

void ft_union(char *s1,  char *s2)
{
	int i = 0;
	int j = 0;
	int len = 0;

	while(s1[i])
	{
		if(verif(s1,s1[i],i) == 1)
			write(1,&s1[i],1);
		i++;
	}
	len = i;
	while(s2[j])
	{
		if(verif(s2,s2[j],j) == 1)
		{
			if(verif(s1,s2[j],len) == 1)
				write(1,&s2[j],1);
		}
		j++;
	}
}
