#include <stdio.h>
#include <stdlib.h>
int main()
{
int *a, n, i, sum = 0;
float avg;
printf("Enter number of elements: ");
scanf("%d", &n);
a = (int *)malloc(n * sizeof(int));
if (a == NULL)
{
printf("Memory not allocated\n");
return 1;
}
printf("Enter %d elements: ", n);
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
sum = sum + a[i];
}
avg = (float)sum / n;
printf("Sum = %d\n", sum);
printf("Average = %.2f\n", avg);
free(a);
return 0;
}
