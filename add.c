#include <stdio.h>
int substract(int firstNumber,int secondNumber);
int multiplication(int firstNumber,int secondNumber);
int division(int firstNumber,int secondNumber);

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;

    printf("Enter two integers: ");

    // Two integers entered by user is stored using scanf() function
    scanf("%d %d", &firstNumber, &secondNumber);

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Displays sum
    printf("%d + %d = %d", firstNumber, secondNumber, sumOfTwoNumbers);

    //Displays subtraction
    printf("%d - %d = %d", firstNumber, secondNumber, substract(firstNumber,secondNumber));

   //Displays Multiplication
    printf("%d * %d = %d", firstNumber, secondNumber, multiplication(firstNumber,secondNumber));

   //Displays Division
    printf("%d / %d = %d", firstNumber, secondNumber, division(firstNumber,secondNumber));
    return 0;
}

int substract(int firstNumber,int secondNumber)
{
	return (firstNumber-secondNumber);
}

int multiplication(int firstNumber,int secondNumber)
{
	return (firstNumber*secondNumber);
}

int division(int firstNumber,int secondNumber)
{
	return (firstNumber/secondNumber);
}