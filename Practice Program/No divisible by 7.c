#include<stdio.h>
#include<conio.h>
int main()
{
    int Num1;
    
    printf("Enter Any Random Number:");
    scanf("%d",&Num1);

    if(Num1 % 7 == 0)
     {
         printf("The %d is divisible by 7 ",Num1); 
     }

    else
     {
         printf("The %d is not divisible by 7 ",Num1); 
     }
     
     getch();
     return 0;
}