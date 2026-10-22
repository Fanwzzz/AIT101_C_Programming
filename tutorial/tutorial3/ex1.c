#include <stdio.h>

int countEven(int n){
    int count = 0;
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0){
            count++;
        }
    }
    return count;
}

int main(void){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The number of even values from 1 to %d is %d\n", n, countEven(n));
    return 0;
}