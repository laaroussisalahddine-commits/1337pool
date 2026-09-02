#include<unistd.h>

int main(int argc,char **argv)
{
    int i;

    if(argc != 2)
    {
        write(1,"\n",1);
        return(0);
    }
    i = 0;
    while((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
            i++;

    while(argv[1][i])
    {
        if(!((argv[1][i] >= 9 && argv[1][i] <= 13) || (argv[1][i] == 32)))
            write(1,&argv[1][i],1);
        else 
            break;

        i++;
    }
    write(1,"\n",1);
    return(0);
}