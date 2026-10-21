#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("You are born in %d\n", 2026 - age);
    return 0;
}