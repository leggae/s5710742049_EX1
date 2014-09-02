#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    float average;
    printf("Enter tree number : ");
    scanf("%f %f %f",&x,&y,&z);
    average = (x+y+z)/3;
    printf("The average is %.2f",average);
    return 0;
}
