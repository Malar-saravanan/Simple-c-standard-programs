//program for checking num tobe palindrome or not
#include<stdio.h>//header file include (preprocessor directives)
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,n1,i,r,s=0;
    printf("Enter the number");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
    r=n%10;
    s=s*10+r;
    n=n/10;
    }
    if(s==n1)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
    return 0;

}
