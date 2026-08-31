#include<unistd.h>

char *swap_cases(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		else if (str[i] > 'A' && str[i] < 'Z')
			str[i] += 32;

		i++;
	}
	return(str);
}

int main(void)
{
	char str[] = "SalahDine";

	swap_cases(str);
	int i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}

	return(0);
}
