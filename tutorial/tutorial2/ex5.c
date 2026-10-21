#include <stdio.h>

int main(void){
    char grade;
    printf("Enter a letter grade: ");
    scanf("%c", &grade);
    switch (grade){
        case 'A':
            printf("Excellent!");
            break;
        case 'B':
            printf("Good work");
            break;
        case 'C':
            printf("Pass");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Invaild input");
            break;
    }
    return 0;
}