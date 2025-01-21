#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include <stdbool.h> // Creates real Boolean (not used in this program)

// Creates fake Boolean
#define TRUE -1;
#define FALSE 0;

int  main() {
	// Intialize variables
	int guess;
	int correct;
	int tries = 0;
	int keepGoing = TRUE;
	char name[20]; // char needs a charcter length []

	printf("What is your name?: "); // prompt user input for name
	scanf("%s", name); // is the actaul input prompt
	printf("Hello %s, let's play a game. \n", name); // greet the user and say what the game is

	srand(time(NULL)); // Makes it so there is a new random number each time
	correct = (rand() % 100) + 1 ; // correct gets the random number 1-100
	// printf("%d \n", correct);
	
	// start of while loop that is pretty much the entire game
	while(keepGoing) {
		tries++; // Adds one to tries
		printf("Try %d, Enter your guess (1-100): ", tries);
		scanf("%d", &guess); // guess gets user input number

		if (guess < correct) {
			printf("Too Low! \n");
			keepGoing = TRUE;
		} else if (guess > correct) {
			printf("Too High! \n");
			keepGoing = TRUE;
		} else {
			printf("Correct! \n");
			keepGoing = FALSE;
		} // end elif statments
	} // ends while loop
	
	printf("It took you %d tries \n", tries); // prints amount of tries and where they placed
	if (tries == 7) {
		printf("You are average, %s \n", name);
	} else if (tries > 7 ){
		printf("You are below average, %s \n", name);
	} else {
		printf("You are above average, %s \n", name);
	} // end of elif statements

	return(0);
} // end of main
