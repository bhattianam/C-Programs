#include <stdio.h>
#include <stdlib.h>
int isPrime(int n)
{
int i;
if (n <= 1)
return 0;
for (i = 2; i * i <= n; i++)
if (n % i == 0)
return 0;
return 1;
}
int main()
{
int *a, n, i, sum = 0;
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
scanf("%d", &a[i]);
for (i = 0; i < n; i++)
if (isPrime(a[i]))
sum = sum + a[i];
printf("Sum of prime numbers = %d\n", sum);
free(a);
return 0;
}
