#include<stdio.h>
#include<conio.h>
void main(){
int a,b,temp;
printf("enter sum ");
scanf("%d",&a);
printf("enter sum2 ");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("after interchange a=%d b=%d",a,b);
getch();
}
