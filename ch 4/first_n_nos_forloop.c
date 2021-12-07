#include <stdio.h>

int main(){
    
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    for (int i=0;i<a;i++) {
        printf("The first %d natural numbers are %d\n", a,i+1);
    }
    return 0;
}