#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int op;
float a,b;
clrscr();
printf("Enter two numbers: ");
scanf("%f  %f",&a,&b);
start:
printf("\n____________________________");
printf("\t\t\tM\tE\tN\tU\n");
puts("__________________________");
printf("\t\t\t1.Addition\n\t\t\t2.Subtraction\n\t\t\t3.Multipliication\n\t\t\t4.Modulus\n\t\t\t5.Division\n\t\t\t6.Power\n\t\t\t7.Exit\n");
printf("Enter Option : ");
scanf("%d",&op);
switch(op)
{
case 1:printf("Addition is %.2f ",a+b);goto start; break;
case 2:printf("Subtraction is %.2f ",a-b);goto start; break;
case 3:printf("Multiplication is %.2f ",a*b);goto start; break;
case 4:printf("Modulus is %d ",(int)a%(int)b);goto start; break;
case 5:printf("Division is %.2f ",a/b);goto start; break;
case 6:printf("Power is %d ",(int)pow(a,b));goto start; break;
case 7:exit(1);
}
getch();

}