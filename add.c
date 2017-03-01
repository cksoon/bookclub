#include <stdio.h>
int substract(int firstNumber,int secondNumber);
int multiplication(int firstNumber,int secondNumber);
int division(int firstNumber,int secondNumber);

int main(int argc, char *argv[])
{
	if ( argc != 2 ) /* argc should be 2 for correct execution */
    {
        /* We print argv[0] assuming it is the program name */
        printf( "error!!!");
    }
    else 
    {
    	int firstNumber, secondNumber, sumOfTwoNumbers;

    	firstNumber = (int*)argv[1];
    	secondNumber = (int*)argv[2];
    	
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
    
}