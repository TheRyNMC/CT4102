#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <iostream>

int main() {
	// Memory for random number
	int num = 0;
	int guess = 0;
	do {
		std::cout << "Guess a random number. ";

		// Seed random number
		srand(time(NULL));

		//Generate random number
		num = rand() % 10 + 1;

		// Adding the random number into the "guess variable"
		std::cin >> guess;

		if (num == guess) {
			printf("You guessed the correct number!!!\n");
		}
		
		//Checking for erroneus data
		else if (guess > 10 || guess < 1) {
			printf("Erroneous data");
			break;
		}


		// Printing the wrong number 
		else {
			std::cout << "Wrong. The number was " << num << "\n";
		} 
	} while (num != guess);
}


