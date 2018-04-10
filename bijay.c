#include<stdio.h>
#include<conio.h>
main()
{
    float s1,s2,s3,s4,s5,s6,s7,total,average,percentage;
    printf("enter the marks of seven subject");
    scanf("%f,%f,%f,%f,%f,%f,%f,",&s1,&s2,&s3,&s4,&s5,&s6,&s7);
    total=s1+s2+s3+s4+s5+s6+s7;
    average=total/7;
    percentage=(total/700)*100;
    printf("\ntotal mark is %f",total);
    printf("\naverage is %f",average);
    printf("\npercentage is %f",percentage);
    getch();


}
