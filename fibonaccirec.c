#include<stdio.h>//header file include (preprocessor directives)
#include<stdlib.h>
int fibo(int n);
    int main()
    {
        int a,i;
        printf("Enter the no of terms in the fibonacci series");
        scanf("%d",&a);
        printf("the series is\n");
        for(i=1;i<=a;i++)
            printf("  %d",fibo(i));
        return 0;
        }
    int fibo(int a)
    {
        if(a==0)
            return 0;
        if(a==1)
            return 1;
            else
            return(fibo(a-1)+fibo(a-2));
    }
