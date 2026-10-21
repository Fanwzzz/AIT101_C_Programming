#include <stdio.h>

int main(){
    int num;
    double price, total;

    printf("Please enter the number of items and unit price: ");
    scanf("%d %lf", &num, &price);
    if (num <= 0 || price <= 0){
        printf("Invalid input. Please enter positive numbers.\n");
        return 0;
    }

    if (num <= 5){
        total = price * num;          
    }
    else if (num <= 10){
        total = price * num * 0.9;    
    }
    else{
        total = price * num * 0.8;    
    }

    printf("Total cost: %.2f\n", total);
    return 0;
}
