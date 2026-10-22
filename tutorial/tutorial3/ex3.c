#include <stdio.h>

float getInput(float degreeC){
    printf("Enter the temperature in Celsius between 0 and 100: ");
    scanf("%f", &degreeC);
    if (degreeC < 0 || degreeC > 100){
        printf("Invalid input. Please enter a temperature between 0 and 100.\n");
        return getInput(degreeC);
    }
    return degreeC;
}

float C_to_F(float degreeC){
    return degreeC * 9/5 + 32;
}

int main(void){
    float degreeC;
    degreeC = getInput(degreeC);
    printf("The temperature in Fahrenheit is %.2f\n", C_to_F(degreeC));
    return 0;
}