//#include <iostream>
//#include <cstdio>
//#include <stdlib.h>
//#include <time.h>
//
////Have to copy the fucntion to the top so it's global
//float functionA(int num1, int num2, float flow1);
//bool functionB(float flow1);
//
//void main() {
//	//Declaring numbers and integers
//	int num1 = 0;
//	int num2 = 0;
//	float flow1 = 0.0f;
//
//	std::cout << "Enter a number ";
//	std::cin >> num1;
//
//	std::cout << "Enter a number ";
//	std::cin >> num2;
//
//	std::cout << "Enter a float ";
//	std::cin >> flow1;
//
//	// Putting the return of functionA into main 
//	float result = functionA(num1, num2, flow1);
//
//	//Putting the return of functionB into main
//	bool finals = functionB(result);
//
//	// Boolean check
//	if (finals){
//		printf("Your value is smaller than the random number");
//	}
//
//	else {
//		printf("Your valiue is larger than the random number");
//	}
//}
//
//// Function A (declaring the variables and varibale types)
//float functionA(int num1, int num2, float flow1) {
//	float calc = flow1 * (num1 + num2);
//	// "return calc" makes function A return the calc each time
//	return calc;
//}
//
//bool functionB(float result) {
//	// Generating a random number between 1 and 10
//	int num = 0;
//	srand(time(NULL));
//	num = rand() % 10 + 1;
//
//	//Boolean check
//	if (result > num){
//		return true;
//	}
//	
//	else {
//		return false;
//	}
//
//}
