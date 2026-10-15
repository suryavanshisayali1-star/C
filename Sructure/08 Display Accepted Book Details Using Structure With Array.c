#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Books
{
    char Book_Name[15];
    int Price;
    char Borrow_Month[10];
    char Return_Month[10];
    char Author_Name[20];
};

int main()
{
    int i = 0;
    struct Books Book[3] = {};

    for(i = 0; i < 3; i++)
    {
        printf("\n Enter %d Book information \n",i+1);

        fflush(stdin);

        printf("\n Enter the Book name => ");
        scanf("%s",&Book[i].Book_Name);

        printf("\n Enter the price of the Book => ");
        scanf("%d",&Book[i].Price);

        fflush(stdin);

        printf("\n Enter the Book Borrowing Month => ");
        scanf("%s",&Book[i].Borrow_Month);
        fflush(stdin);

        printf("\n Enter the Book Return Month => ");
        scanf("%s",&Book[i].Return_Month);

        fflush(stdin);

        printf("\n Enter the Author name => ");
        scanf("%s",&Book[i].Author_Name);

        printf("\n\n");
    }

    system("cls");

    for(i = 0; i < 3; i++)
    {
        printf("\n \n\nThe %d Book details\n\n",i+1);


        printf("\n Book Name           = %s",Book[i].Book_Name);
        printf("\n Book Price          = %d",Book[i].Price);
        printf("\n Book Borrow month   = %s",Book[i].Borrow_Month);
        printf("\n Book Return Month   = %s",Book[i].Return_Month);
        printf("\n Book Author Name    = %s",Book[i].Author_Name);
    }

    getch();
    return 0;
}
