#include<stdio.h>
#include<conio.h>
int main()
{
    int Num1,Num2;
    
     printf("Enter First Number:");
     scanf("%d",&Num1);

     printf("Enter Second Number:");
     scanf("%d",&Num2);

     if(Num1<Num2)
     {
         printf("The %d is less than %d",Num1,Num2); 
     }

     else
     {
         printf("The %d is less than %d",Num2,Num1); 
     }
     
     getch();
     return 0;
}