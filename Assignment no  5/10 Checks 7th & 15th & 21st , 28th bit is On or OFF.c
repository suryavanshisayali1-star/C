#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\nEnter Number = ");
    scanf("%d",&No);

    if((No >> 6) & 1 && (No >> 14) & 1 && (No >> 20) & 1 && (No >> 28) & 1)
    {
        printf("\All Bits Of %d is ON ",No);
    }

     ///////////////////////THREE BIT
    else if((No >> 6)& 1 == 1 && (No >> 14) & 1 && (No >> 20) & 1)
    {
        printf("\nOnly 7th, 15th, 21st Bit Of %d is ON ",No);
    }
    else if((No >> 14)& 1 == 1 && (No >> 20) & 1 && (No >> 27) & 1)
    {
        printf("\nOnly 15th, 21st, 28th Bit Of %d is ON ",No);
    }
    else if((No >> 20)& 1 == 1 && (No >> 27) & 1 && (No >> 6) & 1)
    {
        printf("\nOnly 21st, 28th, 7th Bit Of %d is ON ",No);
    }
    else if((No >> 27)& 1 == 1 && (No >> 6) & 1 && (No >> 14) & 1)
    {
        printf("\nOnly 28th, 7th, 15th Bit Of %d is ON ",No);
    }

     ///////////////////////TWO BIT
    else if((No >> 6)& 1 == 1 && (No >> 14) & 1)
    {
        printf("\nOnly 7th & 15th Bit Of  %d is ON ",No);
    }
    else if((No >> 20)& 1 == 1 && (No >> 27) & 1)
    {
        printf("\nOnly 21st & 28th Bit Of  %d is ON ",No);
    }
    else if((No >> 14)& 1 == 1 && (No >> 20) & 1)
    {
        printf("\nOnly 15th & 21st Bit Of  %d is ON ",No);
    }
    else if((No >> 6)& 1 == 1 && (No >> 27) & 1)
    {
        printf("\nOnly 7th & 28th Bit Of  %d is ON ",No);
    }
    else if((No >> 6)& 1 == 1 && (No >> 20) & 1)
    {
        printf("\nOnly 7th & 21st Bit Of  %d is ON ",No);
    }
    else if((No >> 14)& 1 == 1 && (No >> 27) & 1)
    {
        printf("\nOnly 15th & 28th Bit Of  %d is ON ",No);
    }

    ///////////////////////ONE BIT
    else if((No >> 6) & 1 == 1)
    {
        printf("\nOnly 7th Bits Of %d is ON ",No);
    }
    else if((No >> 14) & 1 == 1)
    {
        printf("\nOnly 15th Bits Of %d is ON ",No);
    }
    else if((No >> 20) & 1 == 1)
    {
        printf("\nOnly 21st Bits Of %d is ON ",No);
    }
    else if((No >> 27) & 1 == 1)
    {
        printf("\nOnly 28th Bits Of %d is ON ",No);
    }

    /////////////////else
    else
    {
        printf("\nAll Bits Of %d is Off",No);
    }

getch();
return 0;
}
