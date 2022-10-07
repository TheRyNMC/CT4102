#include <iostream>

void Recurse(int usernum);

int main() {
	std::cout << "Enter a number ";
	int usernum = 0;
	std::cin >> usernum;

	Recurse(usernum);

}

void Recurse(int usernum) {
	std::cout << "" << usernum;
	if (usernum > 0) {
		--usernum;
		Recurse(usernum);

	}

}