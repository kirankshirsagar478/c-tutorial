#include <stdio.h>

int main(){
    int i=0,factorial=1,n;
    printf ("Give the number for factorial\n");
    scanf ("%d",&n);
    for (i=1;i<=n;i++) {
        factorial *=i;
    }
    printf ("The value of factorial of %d is %d\n",n,factorial);
    return 0;
}