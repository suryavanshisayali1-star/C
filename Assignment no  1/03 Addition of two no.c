#include<stdio.h>
#include<conio.h>
int main()
{
    int Number1,Number2,result;
    printf("Enter First Number:");
    scanf("%d",&Number1);

    printf("Enter Second Number:");
    scanf("%d",&Number2);

    result  = Number1 + Number2;
    
    printf("The Result is %d",result);

    getch();
    return 0;
}
