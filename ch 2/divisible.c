#include <stdio.h>

int main(){
    int num;
    printf ("Enter the number:\n");
    scanf ("%d",&num);
    printf ("Divisibility test returns remainder of:%d",num%97);
    return 0;
}