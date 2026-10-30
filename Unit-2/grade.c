#include<stdio.h>
#include<conio.h>
void main(){
int rollno,marks[5],total=0,i;
float percentage;
char grade;
printf("enter roll no ");
scanf("%d",&rollno);
for (i=0;i<5;i++)
{
printf("enter marks of subject %d ",i+1);
scanf("%d",&marks[i]);
total+=marks[i];
}
percentage=(float)total/5;
if (percentage>=90)
{
grade='A';
}
else if (percentage>=80)
{
grade='B';
}
else if (percentage>=70)
{
grade='C';
}
else if (percentage>=60)
{
grade='D';
}
else
{
grade='F';
}
printf("total=%d\n",total);
printf("percentage=%f\n",percentage);
printf("grade=%c\n",grade);
getch();
}
