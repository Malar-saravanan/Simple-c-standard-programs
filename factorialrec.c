#include<stdio.h>//header file include (preprocessor directives)
#include<stdlib.h>
int fact(int);
int main()//body of the program starts
{ int a;
    printf("Enter the number for finding its factorial");
    scanf("%d",&a);
    printf("The factorial of the given number is %d",fact(a));
    return 0;
}
int fact(int n) //factorial of the number using recursion
{
    if(n==1)
        return 1;
    if (n==0)
        return 0;
    else
        return (n*fact(n-1));
}
