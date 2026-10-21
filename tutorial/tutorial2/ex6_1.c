#include <stdio.h>

int main(void){
    char grade;
    printf("Enter a letter grade: ");
    scanf("%c", &grade);

    if (grade == 'A'){
        printf("Excellent!");
    }
    else{
        if (grade == 'B'){
            printf("Good work");
        }
        else{
            if (grade == 'C'){
                printf("Pass");
            }
            else{
                if (grade == 'F'){
                    printf("Fail");
                }
                else{
                    printf("Invaild input");
                }
            }
        }
    }

    return 0;
}