#include <iostream>
#include <string>
// Adding this makes it so i don't have to use std ::
using namespace std;

int main() {
	//Declaring empty string
	string Words = "";
	cout << "Enter some words ";
	cin  >> Words;
	
	//Finding size of the inout
	int sizeWords = Words.size();

	//BROKEN::: attempted to remove all vowels from my inputted word
	for (int i = 0; i < sizeWords; i++) {
		if (Words[i] == 'a' || Words[i] == 'e' || Words[i] == 'i' || Words[i] == 'o' || Words[i] == 'u' || Words[i] == 'A' || Words[i] == 'E' || Words[i] == 'I' || Words[i] == 'O' || Words[i] == 'U') {
			Words.erase(Words[i]);
		}
	}

	cout << Words;

	////How to print out an individual character in a word
	//cout << Words[0] << std::endl;
}
