#include <iostream>

int main() {
	int num = 0;
	int entered = 0;
	std::cout << "Enter a whole number between 1-9 ";
	std::cin >> entered;

	for (int i = 1; i <= entered; ++i){
		std:: cout << "The number is " <<  i << "\n";
		num = num + i;
	}

	std::cout << "The total is " << num << "\n";
}

