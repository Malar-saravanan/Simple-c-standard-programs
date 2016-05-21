//program for checking strong num or not
#include<stdio.h>//header file include (preprocessor directives)
#include<stdlib.h>
#include<math.h>
int fact(int n)
{

    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return(n*fact(n-1));
}
int main()
{
    int n1,n,i,r,s=0;
    printf("Enter the number");
    scanf("%d",&n1);
    n=n1;
    while(n1)
    {
        r=n1%10;
        s+=fact(r);
        n1=n1/10;
    }
    if(s==n)
        printf("Strong number");
    else
        printf("Not a strong number");
    return 0;
}
