#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,No=0,sum=0;

    for ( i = 1; i <= 10; i++)
    {
        printf("Enter a Number %d :",i);
        scanf("%d",&No);

        if (No>=0)
        {
            sum = sum + No;
        }
    }
    
    printf("The Sum is : %d",sum);
      
    getch();
    return 0;
}