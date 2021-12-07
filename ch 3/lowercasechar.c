#include <stdio.h>

int main(){
    
    // 97-122 =a-z  ASCII Values

    int ch;
    printf ("Enter a character\n");
    scanf ("%c",&ch);

    if (ch<=122 && ch>=97) {
        printf ("%c is lowercase\n",ch);
    }
    else {
        printf ("%c is not lowercase\n",ch);
    }
    return 0;
}