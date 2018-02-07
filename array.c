#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],loc,i,key,n;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elments\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the location to be inserted\n");
scanf("%d",&loc);
printf("enter the key element to be inserted");
scanf("%d",&key);
for(i=n-1;i>=loc;i--)
{
a[i+1]=a[i];
}
a[loc]=key;
printf("array after insertion\n");
for(i=0;i<=n;i++)
{
printf("%d",a[i]);
}
getch();
return(0);
}
