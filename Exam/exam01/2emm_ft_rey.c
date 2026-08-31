#include<unistd.h>

void ft_rey(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
		i++;
	i--;

	while(i >= 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;

		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	
		write(1,&str[i],1);
		i--;
		
	}

}

int main(void)
{
	char str[] = "Hello World!";
	ft_rey(str);
	return(0);
}
