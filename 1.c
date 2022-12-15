#include <stdio.h>
#include <stdlib.h>
int Get_Max(int x,int y)
{
    int m=0;
    if (x>y)
    {
        m=x;
    }
    else
        m=y;
    return m;
}
int main()
{
    int n1,n2,max;
    printf("Enter two numbers:\n");
    scanf("%d %d",&n1 ,&n2);
    max=Get_Max(n1,n2);
    printf("The maximum number is:%d",max);
    return 0;
}
