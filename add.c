#include <stdio.h>
int main()
{
    float firstNumber, secondNumber, sumOfTwoNumbers;
    
    printf("Enter two integers: ");

    // Two floats entered by user is stored using scanf() function
    scanf("%f %f", &firstNumber, &secondNumber);

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Displays sum      
    printf("%f + %f = %f", firstNumber, secondNumber, sumOfTwoNumbers);

    return 0;
}
