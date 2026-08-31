#include<unistd.h>

int main(int argc , char **argv)
{
	int n = 0;
	if (argc == 2)
	{
		int i = 0;
		while(argv[1][i])
		{
			if(n == 1)
				write(1, "   ", 3);
			write(1,&argv[1][i],1);
			n = 1;
			i++;
		}

	}

	else 
	{
		write(1,"\n",1);
	}
	return(0);
}
