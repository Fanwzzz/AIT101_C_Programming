#include <stdio.h>

int sumProgression(int N){
    if (N <= 0){
        return 0;
    }
    return N + sumProgression(N - 1);
}

int main(void){
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Sum of 1 to %d = %d\n", N, sumProgression(N));
    return 0;
}
