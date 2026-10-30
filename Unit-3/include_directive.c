Header file (myheader.h):
/* myheader.h - user defined header file */
int add(int a, int b)
{
return a + b;
}
int multiply(int a, int b)
{
return a * b;
}
Main file (p10.c):
#include <stdio.h>
#include "myheader.h" /* user defined header file */
int main()
{
int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
printf("Sum = %d\n", add(a, b));
printf("Product = %d\n", multiply(a, b));
return 0;
}
