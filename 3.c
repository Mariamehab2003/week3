#include <stdio.h>
#include <stdlib.h>
int Digits2(int x)
{
    int digit=0;
    do{
    x=x/10;
        digit++;
        } while(x>0);
    return digit;

}
int main()
{
    int n;
    printf("Enter a positive number:");
    scanf("%d",&n);
    printf("The number of digits is :%d",Digits2(n));
    return 0;
}
