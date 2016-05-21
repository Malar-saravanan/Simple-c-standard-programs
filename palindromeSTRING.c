//program for checking palindrome num or not
#include<stdio.h>//header file include (preprocessor directives)
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    int flag,i,l;
    char n[100];
    printf("Enter the String");
    scanf("%s",n);

    l=strlen(n);
    for(i=0;i<l;i++)
    {
        if(n[i]!=n[l-i-1])
            flag=1;
        break;

    }
    if(flag==1)
        printf("Not a Palindrome");
    else
        printf(" Palindrome");
    return 0;
}



