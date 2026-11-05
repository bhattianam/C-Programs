#include <stdio.h>
int findMax(int a[], int n)
{
int i, max = a[0];
for (i = 1; i < n; i++)
if (a[i] > max)
max = a[i];
return max;
}
int findMin(int a[], int n)
{
int i, min = a[0];
for (i = 1; i < n; i++)
if (a[i] < min)
min = a[i];
return min;
}
int main()
{
int a[100], n, i;
int (*fp)(int[], int); /* pointer to function */
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d elements: ", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
fp = findMax;
printf("Maximum number = %d\n", fp(a, n));
fp = findMin;
printf("Minimum number = %d\n", fp(a, n));
return 0;
}
