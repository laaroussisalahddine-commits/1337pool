#include<unistd.h>

void ft_swap(char *a , char *b)
{
	int stock;

	stock = *a;
	*a = *b;
   *b = stock;	
}

void change(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{	
			str[i] += 32;
		}

		else if (str[i] >= 'a' && str[i] <= 'z')
		{	
			str[i] -= 32;
		}
		i++;
	}

}

int ft_size(char *str)
{
	int i;

	while(str[i] != '\0')
	{
		i++;
	}
	return(i);

}

void    ft_rey(char *str)
{
	int i;
	int j;

	i = 0;
	j = ft_size(str) - 1;

	change(str);

	while(i < j)
	{

		ft_swap(&str[i] , &str[j]);
		i++;
		j--;
	}
	i = 0;
	while(str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
}

int main(void)
{
	char str[] = "Hello World!";
	ft_rey(str);
	return(0);
}
