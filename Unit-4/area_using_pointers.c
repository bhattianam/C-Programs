#include <stdio.h>
#define PI 3.14159
void circleArea(float r, float *area)
{
*area = PI * r * r;
}
int main()
{
float radius, area;
printf("Enter radius of circle: ");
scanf("%f", &radius);
circleArea(radius, &area);
printf("Area of circle = %.2f\n", area);
return 0;
}
