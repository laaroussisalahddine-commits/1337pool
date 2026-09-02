#include<unistd.h>

int main(int argc, char **argv)
{
	int i;

	if(argc != 2)
	{
		write(1,"\n",1);
		return(0);
	}

	while(argv[1][i])
	{
		if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'n')
				argv[1][i] += 13;
		   	else 
				argv[1][i] -= 13;
		}
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'N')
				argv[1][i] += 13;
			else 
				argv[1][i] -= 13;
		}
		write(1,&argv[1][i],1);
		i++;
	}
}
