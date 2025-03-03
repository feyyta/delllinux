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

void	ft_inter(char *s1, char *s2)
{
		int i = 0;
		int j;

		while(s1[i])
		{
				if(verif(s1,s1[i],i) == 1)
				{
						j = 0;
						while(s2[j])
						{
								if(s2[j] == s1[i])
								{
										write(1,&s1[i],1);
										break;
								}
								j++;
						}
				}
				i++;
		}
}

void	ft_union(char *s1, char *s2)
{
		int i = 0;
		int j = 0;
		while(s1[i])
		{
				if(verif(s1,s1[i],i) == 1)
						write(1,&s1[i],1);
				i++;
		}
		while(s2[j])
		{
				if(verif(s2, s2[j], j) == 1)
				{
						if(verif(s1,s2[j],i) == 1)
								write(1,&s2[j],1);
				}
				j++;
		}
}
int main(int argc, char **argv)
{
		if (argc == 3)
		{
				ft_union(argv[1], argv[2]);
				write(1,"\n",1);
				ft_inter(argv[1], argv[2]);
		}
		write(1,"\n",1);
		return 0;
}
