#include <iostream>

void ques2() {
	// >> and << show where the code is going
	// input from player goes into the std
	std::cout << "Enter the score the student achieved. \n";

	int scores = 0;
	std::cin >> scores;

	if (scores >= 80) {
		printf("You achieved and A* \n");
	}

	else if (scores >= 70 && scores <= 79) {
		printf("You got a A \n");
	}

	else if (scores >= 60 && scores <= 69) {
		printf("You got a B \n");
	}

	else if (scores >= 50 && scores <= 59) {
		printf("You got a  C \n");
	}
	else if (scores >= 40 && scores <= 49) {
		printf("You got a D \n");
	}

	else if (scores >= 1 && scores <= 39) {
		printf("You got a F \n");
	}

	else {
		printf("You failed. You got a U \n");
	}
}


void ques4() {
	
	std::cout << "Please Enter Number: 1 - 5 \n";
	int colaMachin = 0;
	std::cin >> colaMachin;

	switch (colaMachin) {

		case 1: {
			printf("You got Coke Cola \n");
			break;
		}

		case 2: {
			printf("You got Water \n");
			break;
		}

		case 3: {
			printf("You got Apple Cider \n");
			break;
		}

		case 4: {
			printf("Ypou got Beer \n");
			break;
		}

		case 5: {
			printf("You got Lager \n");
			break;
		}
	}
}

int main() {
	ques2();
	ques4();

	// >> and << show where the code is going
	// input from player goes into the std
	std::cout << "Input a number from 1 to 10. \n";

	int playernum = 0;
	// where the input from the player goes into (>>) my variable "playernum"
	std::cin >> playernum;

	// c in cout means console (console out)
	std::cout << playernum << " is the number u put in. \n";

	if (playernum == 5) {
		printf("The number is equal to 5 \n");
	}
	else if (playernum > 5) {
		printf("The number is more than 5 \n");
	}

	else if (playernum < 5) {
		printf("The number is less than 5 \n");
	}

	else {
		printf("The number is invalid \n");
	}

}



