#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,No=0;
    printf("Enter Any Number:");
    scanf("%d",&No);

    printf("The Tale Of %d is => ",No);
    
    for(i=1;i<=10;i++)
    {
        printf("\n%d * %d = %d",No,i,(No*i));
    }
    getch();
    return 0;
}