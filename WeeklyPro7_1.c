#include <stdio.h>

int main()
{
    int num,x=1;
    scanf("%d",&num);
    while(num!=1)
    {
        x*=num;
        num--;
    }
    printf("%d",x);
    return 0;
}