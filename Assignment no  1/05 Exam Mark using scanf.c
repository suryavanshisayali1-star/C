#include<stdio.h>
#include<conio.h>
int main()
{
    int sub1,sub2,sub3,result;
    float per;
    printf("Marks in Suject 1 :");
    scanf("%d",&sub1);

    printf("Marks in Suject 2 :");
    scanf("%d",&sub2);

    printf("Marks in Suject 3 :");
    scanf("%d",&sub3);

    result  = sub1 + sub2 + sub3;
    
    printf("Total marks: %d",result);

    per = (result / 300.0) * 100;

     printf("\tPercentage: %0.2f ",per);

    getch();
    return 0;
}
