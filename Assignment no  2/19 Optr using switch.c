#include<stdio.h>
#include<conio.h>

int main()
{
    char optr='\0';
    float num1=0.0,num2=0.0,res=0.0;
    printf("Enter Any operator (+, -, *, /): ");
    scanf("%c",&optr);  
    
    if (optr != '+' && optr != '-' && optr != '*' && optr != '/')
    {
        printf("INVALID OUTPUT");
        return -1;
    }

    printf("Enter First Number: ");
    scanf("%f",&num1); 
    
    printf("Enter Second Number: ");
    scanf("%f",&num2); 

    switch(optr)
    {
        case '+':
            res = num1 + num2;
            printf("The Addition Of %0.2f / %0.2f : %0.2f",num1,num2,res);
            break;
 
        case '-':
            res = num1 - num2;
            printf("The Substraction Of %0.2f / %0.2f : %0.2f",num1,num2,res);
            break;
            
        case '*':
            res = num1 * num2;
            printf("The Multiplication Of %0.2f / %0.2f : %0.2f",num1,num2,res);
            break;

        case '/':
            res = num1 / num2;
            printf("The Division Of %0.2f / %0.2f : %0.2f.",num1,num2,res);
            break;
    }

    getch();
    return 0;
}