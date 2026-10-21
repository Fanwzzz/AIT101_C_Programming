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

    switch (num){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            total = price * num;          
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            total = price * num * 0.9;    
            break;
        default:
            total = price * num * 0.8;    
            break;
    }
    printf("Total cost: %.2f\n", total);
    
    return 0;
}
