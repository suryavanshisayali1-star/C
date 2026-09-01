#include<stdio.h>
#include<conio.h>

int main()
{
    char div;
    printf("Enter Your Division: ");
    scanf(" %c",&div);   // space to avoid input issue

    switch(div)
    {
        case 'A':
        case 'a':
            printf("Exam of Division A at 10 AM");
            break;

        case 'B':
        case 'b':
            printf("Exam of Division B at 11 AM");
            break;

        case 'C':
        case 'c':
            printf("Exam of Division C at 12 PM");
            break;

        case 'D':
        case 'd':
            printf("Exam of Division D at 1 PM");
            break;

        default:
            printf("Invalid Division");
    }

    getch();
    return 0;
}