#include <iostream>
#include <algorithm>

int main() {
	float ques = 0;
	float theArray[5];
	bool found = false;


	for (int i = 0; i < 5; i++) {
		std::cout << "Enter number: ";
		std::cin >> ques;

		theArray[i] = ques;

	}

	int delNum = 0;

	std::cout << "What value in the array do you want to delete? \n";
	std::cin >> delNum;

	for (int i = 0; i < 5; i++) {
		if (i == delNum){
			//Moving the position by 1
			theArray[i] = theArray[i + 1];
			found = true;
		}
		//Moving all the inputs after the removed ones removed by 1
		else if (found == true) {
			theArray[i] = theArray[i + 1];
		}
	}
	//had to set last array value as 0
	theArray[4] = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << "The numbers are " << theArray[i] << "\n";
	}
}