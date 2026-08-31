#include<unistd.h>
#include<stdio.h>

char *swap_cases(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		
		else if (str [i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}	

		i++;
	}
	
	return (str);

}

int main(void)
{

	char str[] = "SalahDine12";	
	printf("%s\n" ,swap_cases(str));
	return(0);
}


	
