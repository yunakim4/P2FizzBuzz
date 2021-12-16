//
// main.cpp
// Fizz Buzz
// CSCI 151
// Created by Yuna Kim on 12/10/21.
//

#include <iostream>

int main()
{
	int i = 1;

	// while we are still counting from one to one hundred
	while (i <= 100) {

		// if the number is divisible by both 3 and 5, print FizzBuzz
		if (i % 3 == 0 && i % 5 == 0) {
			std::cout << "FizzBuzz\n";

		}

		// if the number is divisible by 3 but not by 5, print Fizz
		else if (i % 3 == 0) {
			std::cout << "Fizz\n";
		}

		// if the number is divisble by 5 but not by 3, print Buzz
		else if (i % 5 == 0) {
			std::cout << "Buzz\n";

		}

		// if the number is neither divisible by 3 and/or 5, print the number
		else {
			std::cout << i;
			std::cout << "\n";

		}

		i++;
	}
}