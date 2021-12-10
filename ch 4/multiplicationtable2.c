#include <stdio.h>

int main(){
    printf("**** Multiplication Table ****\n\n");
    int n,i;
    printf ("Enter the number:\n");
    scanf ("%d",&n);
    
    for (int i=1;i<=10;++i) {
        printf ("%dX%d=%d\n",n,i,n*i);
    }

    return 0;
}