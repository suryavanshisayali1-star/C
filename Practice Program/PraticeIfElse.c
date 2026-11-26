#include<stdio.h>
#include<conio.h>
int main()
{
    int Amt=0;
    printf("Enter Your A/C Balane :");
    scanf("%d",&Amt);

    printf("Welcome To Mall\n");

    if(Amt>=2000)
        printf("Enjoy Your Shopping On Second & Third Floor\n");

    else
        printf("Enjoy Your Shopping On First & Ground Floor\n");

    getch();
    return 0;
}
