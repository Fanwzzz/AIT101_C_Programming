#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two integers:");
    scanf("%d %d", &a, &b);
    printf("sum:%d\ndifference:%d\nmultiplication:%d\ndivision:%d\nmodulo:%d", a+b, a-b, a*b, a/b, a%b);
    return 0;
}