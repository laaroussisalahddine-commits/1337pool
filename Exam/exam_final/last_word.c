#include<unistd.h>

int ft_strlen(char *str)
{
    int len = 0;
    while(str[len])
        len++;

    return(len);
}

int main(int argc, char **argv)
{
    int i;

    if(argc != 2)
    {
        write(1,"\n",1);
        return(0);
    }
    i = ft_strlen(argv[1]) - 1;
    
    while((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
        i--;
    
    while(!((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32))
        i--;
    
    i++;

    while(argv[1][i])
    {
        if((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
            break;
        write(1,&argv[1][i],1);
        i++;
    }
    write(1,"\n",1);
    return(0);
}