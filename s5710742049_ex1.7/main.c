#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int x;
    printf("Enter integer : ");
    scanf("%d",&x);
    if(x%7==0)
    {
        printf("%d%7=0",x);
    }
    if(x%7!=0)
    {
        printf("%d%7!=0",x);
    }

    return 0;
}














