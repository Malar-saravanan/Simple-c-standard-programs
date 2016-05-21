//program for checking perfect num or not
#include<stdio.h>//header file include (preprocessor directives)
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,s=0;
    i=1;
    printf("Enter the number");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
            s=s+i;
            i++;
    }
    if(s==n)
        printf("Perfect number");
    else
        printf("Not a perfect number");
    return 0;
}
