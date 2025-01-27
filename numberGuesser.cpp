#include <iostream>
#include <random>
#include <ctime>

int main() {
	
	std::string userName;
	int correct;
	int guess;
	int tries = 0;
	bool keepGoing = true;

	std::cout << "Please enter your name: "; // Hello user
	std::cin >> userName;
	std::cout << "Hello " << userName << ", let's play a game" << std::endl;

	std::mt19937 gen(static_cast<int>(std::time(0))); // seeds number bassed off of time
	std::uniform_int_distribution<> distr(1, 100); // rand from 1 to 100
	correct = distr(gen); // correct gets random number

	// std::cout << correct << std::endl; // test random number
	
	while(keepGoing) {
		tries++;
		std::cout << "Try " << tries << ", Enter your guess (1-100): ";
		std::cin >> guess;

		if (guess == correct) {
			std::cout << "Correct!" << std::endl;
			keepGoing = false;
		} else if (guess > correct) {
			std::cout << "Too High" << std::endl;
			keepGoing = true;
		} else {
			std::cout << "Too Low" << std::endl;
			keepGoing = true;
		} //end elif statement
	} // end while loop

	std::cout << "You got it in " << tries << " tries." << std::endl;

	if (tries == 7) {
		std::cout << "You are average, " << userName << std::endl;
	} else if (tries > 7){
		std::cout << "You are below average, " << userName << std::endl;
	} else {
		std::cout << "You are above average, " << userName << std::endl;
	} // end elif statement

	return 0;
} // end main
