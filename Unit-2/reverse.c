#include<stdio.h>
#include<conio.h>
void main(){
int num,reversed=0,remainder;
printf("enter num ");
scanf("%d",&num);
while (num!=0)
{
remainder=num%10;
reversed=reversed*10+remainder;
num/=10;
}
printf("reversed=%d",reversed);
getch();
}
