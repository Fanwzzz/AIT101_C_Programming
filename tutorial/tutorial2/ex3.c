#include <stdio.h>

int main(void) 
{
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);
    switch (letter)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.", letter);
            break;
        default:
            printf("Not a vowel.");
            break;
    }
}   