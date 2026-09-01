#include<stdio.h>
#include<conio.h>
int main()
{
    int Days=0;
    printf("Enter Any Number between 1 to 7:");
    scanf("%d",&Days);

    switch (Days)
    {
   
    case 1:
        printf("The day of the week is : Monday");
        break;

    case 2:
        printf("The day of the week is :Tuesday");
        break;

    case 3:
        printf("The day of the week is :Wednesday");
        break;

    case 4:
        printf("The day of the week is :Thursday");
        break;

    case 5:
        printf("The day of the week is :Friday");
        break;

    case 6:
        printf("The day of the week is :Saturday");
        break;

    case 7:
        printf("The day of the week is :Sunday");
        break;

    default:
    
        printf("Invalid No\n");
        printf("Enter Any One No From 1 to 7");
        break;
    }
    getch();
    return 0;
}