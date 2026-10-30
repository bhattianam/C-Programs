#include <stdio.h>
int isArmstrong(int n)
{
int original = n, digits = 0, temp = n, sum = 0, i, power, d;
while (temp != 0)
{
digits++;
temp = temp / 10;
}
while (n != 0)
{
d = n % 10;
power = 1;
for (i = 0; i < digits; i++)
power = power * d;
sum = sum + power;
n = n / 10;
}
return (sum == original);
}
int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
if (isArmstrong(n))
printf("%d is an Armstrong number\n", n);
else
printf("%d is not an Armstrong number\n", n);
return 0;
}
