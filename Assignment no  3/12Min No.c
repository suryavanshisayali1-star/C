#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, No=0, min=99999999;

    for ( i = 1; i <= 7; i++)
    {
        printf("Enter a Number %d :",i);
        scanf("%d",&No);

        if (No < min)
        {
            min = No; 
        }
    }
    
    printf("\nThe Output is => \n");
    printf("The Minimum No is : %d",min);
      
    getch();
    return 0;
}