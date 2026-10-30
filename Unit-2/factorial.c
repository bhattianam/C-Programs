#include<stdio.h>
#include<conio.h>
void main(){
int num,fact=1,i;
printf("enter num ");
scanf("%d",&num);
for (i=1;i<=num;i++)
{
fact*=i;
}
printf("factorial=%d",fact);
getch();
}
