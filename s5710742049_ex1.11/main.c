#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a;
    while (b!=0)
    {
        c=b%8;
        b/=8;
        ++d;
        printf("%d x 8^%d\n",c,d);
    }
    while (b!=0)
    {
        c=b%16;
        b/=16;
        ++d;
        printf("\n%d x 16^%d\n",c,d);
    }
    system("pause");
    return 0;
}
