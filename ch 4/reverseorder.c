#include <stdio.h>

int main(){
    int a;
    printf ("Enter the value \n");
    scanf ("%d",&a);
    for (int i=a;i;i--) {
        printf ("The value of i is %d\n",i);
    }
    return 0;
}