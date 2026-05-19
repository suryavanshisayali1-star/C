#include<stdio.h>
#include<conio.h>
int main()
{
    char Vowel;
    printf("Enter Any Vowel:");
    scanf("%c",&Vowel);

    if(Vowel == 'a')
    {
        printf("The character 'a' is a vowel. ");
    }
    else if (Vowel == 'e')
    {
        printf("The character 'e' is a vowel. "); 
    }
    else if(Vowel == 'i')
    {
        printf("The character 'i' is a vowel. ");
    }
    else if(Vowel == 'o')
    {
        printf("The character 'o' is a vowel. ");
    }
    else if(Vowel == 'u')
    {
        printf("The character 'u' is a vowel. ");
    }
    else if(Vowel)
    {
        printf("The character %c is a Consonant.",Vowel);
    }
    
    else
    {
        printf("The character is Other");
    }
    
    getch();
    return 0;
}