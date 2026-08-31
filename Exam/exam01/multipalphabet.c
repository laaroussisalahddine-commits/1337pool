#include<unistd.h>
int main(int argc , char **argv)
{
	int i = 0;
	int j ;
	int pos;
	
	if (argc != 2)
	{
		write(1,"\n",1);
		return(1);
	}

	while(argv[1][i])
	{
		pos = argv[1][i] - 'a' + 1;
		j = 0;

		while(j < pos)
		{
			write(1,&argv[1][i],1);
			j++;
		}
		i++;

	}
	write(1,"\n",1);
	return(0);
}
