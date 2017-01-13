#include<stdio.h>
int main()
{
    char x;
    int y=0;
    while((x=getchar())!=EOF)
    {
        if(x=='\n')
            y++;
    }
    printf("%d",y);
    return 0;
}
