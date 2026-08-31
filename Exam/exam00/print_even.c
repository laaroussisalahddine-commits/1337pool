#include<unistd.h>

int main(void)
{
	char str[] = "FOR 42";
	
	 int i = 0;

        while(str[i] != '\0')
        {
                write(1, &str[i],1);
                i = i + 2;
        }

	return(0);
}
