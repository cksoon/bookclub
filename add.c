#include <stdio.h>
int main()
{
    float firstNumber, secondNumber, sumOfTwoNumbers;
    
    printf("Enter two integers: ");

    // Input verification to make sure two integers are entered
    do(

    // Two floats entered by user is stored using scanf() function
    scanf("%f %f", &firstNumber, &secondNumber);

    )while(firstNumber == NULL && secondNumber == NULL);

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Displays sum      
    printf("%f + %f = %f", firstNumber, secondNumber, sumOfTwoNumbers);

    return 0;
}
