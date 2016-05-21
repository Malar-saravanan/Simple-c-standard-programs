//program for only real roots obtaining quadriatc equations
#include<stdio.h>//header file include (preprocessor directives)
#include<stdlib.h>
#include<math.h>
int fibo(int n);
    int main()
    {
int     a,b,c,x,d;
        float x1,r1,r2;
        printf("Enter the coefficients of the quadriatic equation");
        scanf("%d %d %d",&a,&b,&c);
        x=(b*b)-(4*a*c);
        x1=sqrt((x));
        d=2*a;
        r1=(x1-b)/d;
        r2=(-x1-b)/d;
        printf("The two roots are \n");
        printf("%f %f",r1,r2);
        return 0;
    }
