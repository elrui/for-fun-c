#include <stdio.h>
#include <stdlib.h> 

void receive(int number1, int number2) {
	/* 
	 * Creates an integer variable and assigns the sum of both parameters
     * Does not return anything
	 */

	int c = number1 + number2;
}

int result() {
	/*
	 * Takes no parameter, declares an integer variable without initialization
	 * Returns that variable (indetermined)
	 */

	int x;
	return x;
}


/* Main program expects up to two integers as inpunts, from command line
 * If any parameter is omited, default value is 0
 * If more than two parameters are given, only the first two will be taken, the rest ignored
 * If any parameter is not integer, the behavior is not defined. The program is expected to fail
 */

void main (int argc, char *argv[]) {

	int first  = 0;		// Default for first variable is 0
	int second = 0;		// Default for second variable is 0

    /*
     * The following block only parses the input and assigns the values to variables
     * If second variable is empty, default value is kept. If both are empty,  both defaults are kept
     * Some non-numericals may be converted to zero, dependending on the implementation of strtol
     */

	if (argc >= 3) {
		second = (int)strtol(argv[2],NULL,10);
		first  = (int)strtol(argv[1],NULL,10);
	}
	else if (argc==2) {
		first = (int)strtol(argv[1],NULL,10); 
	}

    // Now we call the two functions we defined above. Result 'should' be indetermined... or should it?

	receive(first, second);
	int surprise = result();

	printf ("Sum is: %d \n", surprise);
	printf ("Do you know what just happened? And why? \n\n");
}


