#include<stdio.h>
#include<conio.h>
int main()
{
    int Days=0;
    printf("Enter Any Random No:");
    scanf("%d",&Days);

    if(Days==1)
    {
        printf("Monday");
    }
    elseif (Days==2)
    {
        printf("Tuesday"); 
    }
    elseif(Days==3)
    {
        printf("Wednesday");
    }
    elseif(Days==4)
    {
        printf("Thursday");
    }
    elseif(Days==5)
    {
        printf("Friday");
    }
    elseif(Days==6)
    {
        printf("Saturday");
    }
    elseif(Days==7)
    {
        printf("Sunday");
    }
    
    else
    {
        printf("Invalid No");
        printf("Enter Any One No From 1 to 7");
    }
    getch();
    return 0;
}