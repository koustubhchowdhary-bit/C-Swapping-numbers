#include <stdio.h>

void swapnum(int *ptr1, int *ptr2);

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    //Printing the initial values of both variables
    printf("%f, %f", num1, num2);
    
    swapnum(&num1, &num2);
    
    //Printing the final values of both variables. The change is also represnted in the main fucntion.
    printf("%f, %f", num1, num2);
    return 0;
}

void swapnum(float *ptr1, float *ptr2) {
    int s = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = s;
}
