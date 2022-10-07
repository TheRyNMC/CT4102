#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <iostream>

int main() {
	std::cout << "Guess a random number. ";

	// Memory for random number
	int num = 0;

	// Seed random number
	srand(time(NULL));

	//Generate random number
	num = rand() % 10 + 1;

	int guess = 0;

	// Adding the random number into the "guess variable"
	std::cin >> guess;

	if (num == guess) {
		printf("You guessed the correct number!!!\n");
	}
	// Printing the wrong number 
	else {
		std::cout << "Wrong: " << num;
	}
}




