#include <stdio.h>

int main(){
    int x=2, y=3;
    printf ("The value of 3*x-8*y is %d\n",3*x-8*y);
    // output will correct
    printf ("The value of 8*y/3*x is %d\n",8*y/3*x);
    /* 8*3/3*x=24/6 will give wrong answer
        24/3*2
        8*2
        16
    */
    return 0;
}