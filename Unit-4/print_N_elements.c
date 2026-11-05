#include <stdio.h>
int main()
{
int a[100], n, i;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d elements: ", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
printf("The elements are: ");
for (i = 0; i < n; i++)
printf("%d ", a[i]);
printf("\n");
return 0;
}
