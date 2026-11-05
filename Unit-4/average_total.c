#include <stdio.h>
int main()
{
int a[100], n, i, total = 0;
float avg;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d elements: ", n);
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
total = total + a[i];
}
avg = (float)total / n;
printf("Total = %d\n", total);
printf("Average = %.2f\n", avg);
return 0;
}
