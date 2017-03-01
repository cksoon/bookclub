#include <stdio.h>
int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    printf("Enter two integers: ");

    // Input verification to make sure two integers are entered
    do(

    // Two integers entered by user is stored using scanf() function
    scanf("%d %d", &firstNumber, &secondNumber);

    )while(firstNumber == NULL && secondNumber == NULL);

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Displays sum      
    printf("%d + %d = %d", firstNumber, secondNumber, sumOfTwoNumbers);

    return 0;
}
