#include <stdio.h>
#include <stdlib.h>
int i=0,j=0;
void passcheck(int pass);
void idcheck(int id )
 {
    int id2;
     int pass;
     if (id==1234)
     {
    printf("Enter your password:");
    scanf("%d",&pass);
        passcheck(pass);
     }

      else
     {
    for(;i<2;i++)
    {
    printf("Enter correct ID:");
    scanf("%d",&id2);
    i+=1;
    idcheck(id2);
    }
    if(i==2)
         {printf("No more tries");}
     }
 }

    void passcheck(int pass)
    {
         int pass2;
    if(pass==9876){
        printf("Welcome!");}
    else
     {
    for(;j<2;j++)
    {
    printf("Enter correct password:");
    scanf("%d",&pass2);
    j+=1;
    passcheck(pass2);
    }
    if(j==2)
         {printf("No more tries");}
     }
    }
int main()
{
    int id;
    printf("Enter your ID:");
    scanf("%d",&id);
    idcheck(id);

    return 0;
}
