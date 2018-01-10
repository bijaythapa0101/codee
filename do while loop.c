#include<stdio.h>
#include<conio.h>
int main()
{
int i=1,n;
printf("enter the limit no.");
scanf("%d",&n);
do
{
printf("%d\n",i);i++;
}
while(i<=n);
getch();
return(0);
}
