#include <stdio.h>
#include <stdlib.h>
int x ,y,c;
 void Swap(int *x,int *y)
{
c=*x;
*x=*y;
*y=c;
}
int main()
{
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    Swap(&x,&y);
    printf("Numbers after swapping: %d\t%d",x,y);
    return 0;
}
