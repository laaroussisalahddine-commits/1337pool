#include<unistd.h>

int    count_alen(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if (str[i] == 'a')
			break;

		i++;
	}
	return(i);
}

int main(void)
{
	char str[] = "soyaber";
	char x;

	x = count_alen(str) + '0';
	write(1,&x,1);

	return(0);
}
