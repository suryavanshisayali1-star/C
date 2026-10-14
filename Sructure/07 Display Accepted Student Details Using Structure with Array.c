#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stud
{
    int Roll_No;
    char Name[20];
    int Physics;
    int Chemistry;
    int Maths;
    int Total;
    float Per;
};

int main()
{

    int i = 0;
    struct Stud Std [3] = {};

    for(i = 0; i < 3; i++)
    {
        printf("************************************************");
        printf("\n Enter %d student information => \n ",i+1);
        printf("************************************************\n");

        printf("\n Enter Student Roll Number => ");
        scanf("%d",&Std[i].Roll_No);

        fflush(stdin);
        printf("\n Enter Student Name => ");
        scanf("%s",&Std[i].Name);

        printf("\n Enter Student physics marks => ");
        scanf("%d",&Std[i].Physics);

        printf("\n Enter Student chemistry marks => ");
        scanf("%d",&Std[i].Chemistry);

        printf("\n Enter Student Maths Marks => \n");
        scanf("%d",&Std[i].Maths);

        Std[i].Total = Std[i].Physics + Std[i].Chemistry + Std[i].Maths;
        Std[i].Per = (float)Std[i].Total / 3.0;
    }

    system("cls");
     printf("\n Student Details Are as Follows => \n ");

        for(i = 0; i < 3; i++)
        {

            printf("\n Student %d details are => \n\n",i+1);

            printf("\n Roll no    = %d", Std[i].Roll_No);
            printf("\n Name       = %s", Std[i].Name);
            printf("\n Physics    = %d", Std[i].Physics);
            printf("\n Chemistry  = %d", Std[i].Chemistry);
            printf("\n Maths      = %d", Std[i].Maths);
            printf("\n Total      = %d", Std[i].Total);
            printf("\n Percentage = %f", Std[i].Per);

            printf("\n\n");
        }

    getch();
    return 0;
};

