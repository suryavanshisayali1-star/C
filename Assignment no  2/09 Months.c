#include<stdio.h>
#include<conio.h>
int main()
{
    int Months=0;
    printf("Enter Any Random No:");
    scanf("%d",&Months);

    if(Months==1)
    {
        printf("January");
    }
    else if(Months==2)
    {
        printf("February"); 
    }
    else if(Months==3)
    {
        printf("March");
    }
    else if(Months==4)
    {
        printf("April");
    }
    else if(Months==5)
    {
        printf("May");
    }
    else if(Months==6)
    {
        printf("June");
    }
    else if(Months==7)
    {
        printf("July");
    }
    else if(Months==8)
    {
        printf("August");
    }
    else if(Months==9)
    {
        printf("September");
    }
    else if(Months==10)
    {
        printf("October");
    }
    else if(Months==11)
    {
        printf("November");
    }
    else if(Months==12)
    {
        printf("December");
    }
    
    else
    {
        printf("Invalid No\n");
        printf("Enter Any One No From 1 to 12");
    }
    getch();
    return 0;
}