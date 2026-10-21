#include <stdio.h> 
 
int main (void) 
{ 
    int num1, num2; 
 
    printf ("Output A: "); 
    for (num1=1;num1<=10; num1++) 
    { 
        printf("%d ", num1); 
        if (num1==5) 
            break; 
    } 
 
    printf ("\nOutput B: "); 
    for (num2=1;num2<=10; num2++) 
    { 
        if (num2==5) 
            continue; 
        printf("%d ", num2); 
    } 
 
 return 0; 
}