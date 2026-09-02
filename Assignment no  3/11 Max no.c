#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,No=0,max=0;

    for ( i = 1; i <= 7; i++)
    {
        printf("Enter a Number %d :",i);
        scanf("%d",&No);

        if (No > max)
        {
            max = No; 
        }
    }
    
    printf("\nThe Output is => \n");
    printf("The Maximum No is : %d",max);
      
    getch();
    return 0;
}