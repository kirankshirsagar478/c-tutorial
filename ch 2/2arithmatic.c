#include <stdio.h>
#include <math.h>

int main(){
    int a=8, b=4;

    printf ("The value of a+b is:%d\n" ,a+b);
    printf ("The value of a-b is:%d\n",a-b);
    printf ("The value of a*b is:%d\n", a*b);
    printf ("The value of a/b is:%d\n", a/b);

    int z;
     z=a*b; //legal
    //  a*b=z; //illegal
    printf ("The value of z is:%d\n",z);
    // Numerator sign is imprtant.
    printf ("when 5 is divided by 2 remainder will:%d\n",5%2);
    printf ("when -5 is divided by 2 remainder will:%d\n",-5%2);
    printf ("when 5 is divided by -2 remainder will:%d\n",5%-2);

    // No operators are assumed to be present
    // printf ("Value of 4*5 is %d\n", (4)(5));   -->wrong
    printf ("Value of 4*5 is %d\n", (4)*(5));

    // There is no operator to perform exponentiation in C
    printf ("The value of 4^5 is:%d\n",4^5); //output will 1 because ^is a bitwise xor operator

    /*
    we can use pow(x,y) from #include <math.h>
    for find the power
    */  printf ("The value of 4 to the power 5 is:%f\n", pow(4,5));

    /*
    int and int     --> int
    int and float   -->float
    float and float --> float
    */ printf ("Value of 6+5 is:%d\n", 6+5);
        printf ("Value of 6+5.6 is:%f\n",6+5.6);
         printf ("Value of 6.1+5.6 is:%f\n", 6.1+5.6);
    

    printf ("the value of 5/2 is %d\n",5/2); 
    printf ("Value of 2/5 is:%d\n", 2/5);
    printf ("Value of 5.0/2 is:%f\n", 5.0/2);
    printf ("Value of 2.0/5 is: %f\n", 2.0/5);
    printf ("Value of 3.0/9 is:%f\n", 3.0/9);
    printf ("Value of 3.0/9 is:%d\n", 3.0/9);//not recommended


    return 0;
}