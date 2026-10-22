#include <stdio.h>

int display(int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main(void){
    int size;
    printf("Enter the size of the square: ");
    scanf("%d", &size);
    display(size);
    return 0;
}