#include<stdio.h>
#include<conio.h>
void main(){
int num,sum=0,remainder;
printf("enter num ");
scanf("%d",&num);
while (num!=0)
{
remainder=num%10;
sum+=remainder;
num/=10;
}
printf("sum of digits=%d",sum);
getch();
}
