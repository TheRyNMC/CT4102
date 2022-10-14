#include <iostream>

int main() {
	int i = 0;
	int curr = 0;

	while (i < 10) {
		std::cout << "Please enter a number other than 5";
		std::cin >> curr;
		if (curr != 5) {
			i = i + 1;
		}
		else if (curr == 5) {
			printf("You weren't supposed to enter 5");
			break;
		}
		else {
			printf("Wow, you’re more patient than I am, you win.");
			break;
		}
	}
}

