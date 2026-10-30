#include<stdio.h>
#include<conio.h>
void main(){
int num,originalNum,remainder,result=0;
printf("enter num ");
scanf("%d",&num);
originalNum=num;
while (originalNum!=0)
{
remainder=originalNum%10;
result+=remainder*remainder*remainder;
originalNum/=10;
}
if (result==num)
{
printf("%d is armstrong",num);
}
else
{
printf("%d is not armstrong",num);
}
getch();
}
