#include <stdio.h>

int main(){
    int a,b,c,d;
    printf ("Enter first number:\n");
    scanf ("%d",&a);
    printf ("Enter second number:\n");
    scanf ("%d",&b);
    printf ("Enter third number:\n");
    scanf ("%d",&c);
    printf ("Enter forth number\n");
    scanf ("%d",&d);

    if (a>b &&a>c && a>d)
    {
        printf ("Greatest number is:%d",a);
    }
    else if (b>a && b>c && b>d)
    {
        printf ("Greatest number is:%d",b);
    }
    else if (c>a && c>b && c>d)
    {
        printf ("Greatest number is:%d",c);
    }
    else 
    {
        printf ("Greatest number is:%d",d);
    }


    return 0;
}