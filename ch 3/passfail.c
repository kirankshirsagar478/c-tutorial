#include <stdio.h>

int main()
{
    int phy, chem, math;
    float total;

    printf("Enter the physics marks\n");
    scanf("%d", &phy);

    printf("Enter the chemistry marks\n");
    scanf("%d", &chem);

    printf("Enter the Maths marks\n");
    scanf("%d", &math);

    total = (phy + chem + math) / 3;

    if ((total < 40) || phy < 33 || chem < 33 || math < 33)
    {
        printf("Your total percentage is %f and you are FAIL\n", total);
        // we can also write this line as
        // printf("Your total percentage is %d and you are FAIL\n", (int) total);
    }
    else
    {
        printf("Your total percentage is %f and you are PASS\n", total);
    }
    return 0;
}