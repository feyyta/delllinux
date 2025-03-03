#include <stdio.h>
int main()
{
	int i;
	static int ref = 500;
	int d = 0;

	i = 500;
	while (i >= 1)
	{
		d = (ref * 7) - 2 / 2;
		printf("%d ", d);
		ref = ref - 4;
		i--;
	}
}