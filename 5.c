#include <stdio.h>
#include <stdlib.h>
void Fibonacci(int n)
{
    int a=0,b=1,res;
    if(n==0)
        a=0;
    else if(n==1)
        a=1;
    else
       {
    for(int i=0;i<=n;i++)
    {
        printf("%d\t",a);
    res=a+b;
    a=b;
    b=res;
    }
       }
}
int main()
{ int x;
    printf("Enter the number:");
    scanf("%d",&x);
 printf("The fibonacci of the number is:");
 Fibonacci(x);
    return 0;
}
