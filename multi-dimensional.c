#include<stdio.h>
#include<conio.h>
int main()
{
int a[2][2],i,j;
printf("enter the element of array\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the element are:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
getch();
return(0);
}
