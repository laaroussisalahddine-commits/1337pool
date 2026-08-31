#include<unistd.h>

int occ_a(char *str)
{
	int i;
	int lenA;
	i = 0;
	lenA = 0;

	while(str[i] != '\0')
	{
		if (str[i] == 'A')
			lenA++;

		i++;
	}
	return(lenA);
}

int main(void)
{
	char str[] = "sAlAheddine";
	char x;

	x = occ_a(str) + '0';

	write(1,&x,1);
	return(0);
}

