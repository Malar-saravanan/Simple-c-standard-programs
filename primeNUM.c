//program for finding prime or not
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,flag=0;
    printf("Enter the number ");
    scanf("%d",&n);

        i=2;
    while(i<=n/2)
    {
        if(n%i==0)
           {
            flag=1; break;
           }
           i++;
        }
        if(flag==1)
            printf("Not a Prime");
        else
            printf("Prime");
        return 0;
}
