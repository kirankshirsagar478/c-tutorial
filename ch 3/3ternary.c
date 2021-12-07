#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number:\n");

    scanf("%d", &a);

// One Line code 
    (a < 5) ? printf("%d is less than 5", a) : printf("%d is not less than 5", a);

    return 0;
}