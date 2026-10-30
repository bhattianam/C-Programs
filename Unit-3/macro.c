#include <stdio.h>
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int main()
{
int n, a, b;
float r;
printf("Enter a number: ");
scanf("%d", &n);
printf("Square of %d = %d\n", n, SQUARE(n));
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
printf("Maximum of %d and %d = %d\n", a, b, MAX(a, b));
printf("Enter radius of circle: ");
scanf("%f", &r);
printf("Area of circle = %.2f\n", PI * SQUARE(r));
return 0;
}
