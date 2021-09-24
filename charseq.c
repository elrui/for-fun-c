#include <stdio.h>
#include <stdlib.h> 

#define OFFSET 64

/* Main program expects up to two integers as inpunts, from command line
 * If any parameter is omited, default values are:
 * start  = 1
 * length = 10 
 * If more than two parameters are given, only the first two will be taken, the rest ignored
 * If any parameter is not integer, the behavior is not defined. The program is expected to fail
 * It will print all characters from the ASCII table, starting at the point marked by `start` and
 * extending for `length` characters
 * 
 * For convenience OFFSET has been defined such as starting at 1 will give a letter A in the first position 
 * Start can be negative or zero (if you want to print characters before 'A')
 */

int main (int argc, char *argv[]) {

	int start    = 1;		// 
	int length   = 10;		// 
  

    /*
     * The following block only parses the input and assigns the values to variables
     * If second variable is empty, default value is kept. If both are empty,  both defaults are kept
     * Some non-numericals may be converted to zero, dependending on the implementation of strtol
     */


	if (argc >= 3) {
		length   = (int)strtol(argv[2],NULL,10);
		start    = (int)strtol(argv[1],NULL,10);
	}
	else if (argc==2) {
		start  = (int)strtol(argv[1],NULL,10);
	}

    /*
     * Let's create a (short) integer arrayand create a loop to fill it in with thw characters
     * Starting with `OFFSET + start` and with `length` characters in it
     */
    short* chars = malloc(sizeof(short) * length);

    // Fill the array with `length` consecutive integers, starting at OFFSET + `start`
    for (int i = 0; i < length; i++) {
        chars[i] = start + i + OFFSET; 
    }

    printf("These are the chars:\n");
    
    // Print elements of the array one at a time
	for (int i = 0; i < length; i++) {

         printf("%c", i[chars]);          // Does this seem odd to you?
    }

    printf("\nEnd of execution.\n\n");

    free(chars);    // Don't forget to free memory

   return 0;
}


