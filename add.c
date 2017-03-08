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
    	 float firstNumber, secondNumber, sumOfTwoNumbers;
	 

    	firstNumber = (float*)argv[1];
    	secondNumber = (float*)argv[2];
    	
    	// Displays sum
    	printf("%f + %f = %f", firstNumber, secondNumber, sumOfTwoNumbers);

    	//Displays subtraction
	    printf("%f - %f = %f", firstNumber, secondNumber, substract(firstNumber,secondNumber));

 	  	//Displays Multiplication
    	printf("%f * %f = %f", firstNumber, secondNumber, multiplication(firstNumber,secondNumber));

	    //Displays Division
 	    printf("%f / %f = %f", firstNumber, secondNumber, division(firstNumber,secondNumber));
    	return 0;
    }
}
