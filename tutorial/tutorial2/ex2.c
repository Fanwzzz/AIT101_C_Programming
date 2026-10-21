#include <stdio.h>

int main(void) {
    float weight, height;
    printf("Please enter your height(m) and weight(kg): ");
    scanf("%f %f", &height, &weight);
    float bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    if (bmi <= 25.0 && bmi >= 18.0){
        printf("BMI is normal");
    }
    return 0;
}