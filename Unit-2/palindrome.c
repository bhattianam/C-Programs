#include<stdio.h>
#include<conio.h>
void main(){
int num,originalNum,reversed=0,remainder;
printf("enter num ");
scanf("%d",&num);
originalNum=num;
while (originalNum!=0)
{
remainder=originalNum%10;
reversed=reversed*10+remainder;
originalNum/=10;
}
if (reversed==num)
{
printf("%d is palindrome",num);
}
else
{
printf("%d is not palindrome",num);
}
getch();
}
