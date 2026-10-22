#include <stdio.h>

float perimeter(float height, float length){
    return 2 * (height+length);
}

float area(float height, float length){
    return height * length;
}

int main(void){
    float height, length;
    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("The perimeter of the rectangle is %.2f\n", perimeter(height, length));
    printf("The area of the rectangle is %.2f\n", area(height, length));
    return 0;
}