#include<stdio.h>
#include<conio.h>
void main(){
int x,y,power=1,i;
printf("enter base ");
scanf("%d",&x);
printf("enter exponent ");
scanf("%d",&y);
for (i=1;i<=y;i++)
{
power*=x;
}
printf("power=%d",power);
getch();
}
