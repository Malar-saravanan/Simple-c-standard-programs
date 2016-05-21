//program for checking perfect num or not
#include<stdio.h>//header file include (preprocessor directives)
#include<stdlib.h>
#include<math.h>
int main()
{
    int i=1,n,s=0,n1;
    printf("Enter the number ");
    scanf("%d",&n);
    n1=n;
    while(i<n)
    {
        if(n%i==0)
            s+=i;
        i++;

    }
    if(s==n1)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
    return 0;
}
