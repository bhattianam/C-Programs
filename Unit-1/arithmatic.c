#include<stdio.h>
#include<conio.h>
void main(){
int a,b,add,sub,mul,div,mod;
printf("enter sum ");
scanf("%d%d",&a,&b);
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
printf("addition=%d\n",add);
printf("subtraction=%d\n",sub);
printf("multiplication=%d\n",mul);
printf("division=%d\n",div);
printf("modulus=%d\n",mod);
getch();
}
