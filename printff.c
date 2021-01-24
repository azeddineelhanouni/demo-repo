#include <stdio.h>



int	main(int argv,char *argc[])
{
	int i,j;
	
	i = 1;
	
	
	while (i < argv)
	{
		printf("%s ",argc[i]);	
		i++;
	}
	
	
	
	
	
	return 0;
}