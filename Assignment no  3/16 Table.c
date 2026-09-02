#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,No=0;
    printf("Enter Any Number:");
    scanf("%d",&No);

    printf("The Tale Of %d is => ",No);
    
    for(i=10 ; i>=1 ; i--)
    {
        printf("\n%d * %2d = %d",No,i,(No*i));
    }
    getch();
    return 0;
}