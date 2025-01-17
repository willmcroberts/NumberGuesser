#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE -1;
#define FALSE 0;

int  main() {
	int guess;
	int correct;
	int tries = 0;
	int keepGoing = TRUE;
	char name[20];

	printf("What is your name?: "); // prompt user input for name
	scanf("%s", name); // is the actaul input prompt
	printf("Hello, %s \n", name); // greet the user and say what the game is

	srand(time(NULL)); // Makes it so there is a new random number each time
	correct = rand() % 100; // correct gets the random number
	// printf("%d \n", correct);
	
	// start of while loop that is pretty much the entire game
	while(keepGoing) {
		tries++;
		printf("Try %d, Enter your guess: ", tries);
		scanf("%d", &guess);

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
	
	printf("It took %d tries \n", tries); // prints amount of tries and where they placed
	if (tries == 7) {
		printf("You are average, %s \n", name);
	} else if (tries > 7 ){
		printf("You are below average, %s \n", name);
	} else {
		printf("You are above average, %s \n", name);
	} // end of elif statements

	return(0);
} // end of main
