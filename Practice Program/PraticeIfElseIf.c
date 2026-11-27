#include<stdio.h>
#include<conio.h>
int main()
{
    int Amt=0;
    printf("Enter Your A/C Balane :");
    scanf("%d",&Amt);

    printf("Welcome To Mall\n");

    if(Amt>=10000)
        printf("Enjoy Your Shopping On Top & Third Floor\n");

    else if(Amt>=5000)
        printf("Enjoy Your Shopping On Second & Third Floor\n");

    else if(Amt>=1000)
        printf("Enjoy Your Shopping On First & Second Floor\n");

    else
        printf("Enjoy Your Shopping On Ground Floor\n");

    getch();
    return 0;
}
