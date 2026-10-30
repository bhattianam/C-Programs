#include<stdio.h>
#include<conio.h>
void main(){
int a,q,total,dis;
printf("enter sum ");
scanf("%d",&a);
printf("enter quantity ");
scanf("%d",&q);
total=a-(a*q);
if (dis>1000)
{
dis=dis-(dis*15/100);
printf("discount=%d",dis);
}
else
{
dis=dis-(dis*10/100);
printf("discount=%d",dis);
}
getch();
}
