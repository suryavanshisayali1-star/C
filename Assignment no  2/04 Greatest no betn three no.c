#include<stdio.h>
#include<conio.h>
int main()
{
    int Num1,Num2,Num3;
    
    printf("Enter First Number:");
    scanf("%d",&Num1);

    printf("Enter Second Number:");
    scanf("%d",&Num2);

    printf("Enter Third Number:");
    scanf("%d",&Num3);

     if(Num1>Num2 && Num1>Num3)
     {
         printf("The greater no is: %d ", Num1); 
     }
     
      else if(Num1<Num2 && Num2>Num3)
     {
         printf("The greater no is: %d ", Num2); 
     }

     else
     {
         printf("The greater no is: %d",Num3); 
     }
     
     getch();
     return 0;
}