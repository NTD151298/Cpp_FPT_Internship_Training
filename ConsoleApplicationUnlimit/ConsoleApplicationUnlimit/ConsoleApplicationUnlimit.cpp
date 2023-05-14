#include <iostream>
#include<iomanip>
#include <string>
#include <cmath>



int main() {
	int a = 15;
	std::cout << a << "\n";
	std::cout << "Hello world!\n";

	int k;

	std::cin >> k;

	if (k % 2 == 0) {
		std::cout << "So " << k << " la so chan.";
	}
	else std::cout << "So " << k << " la so le.";
	
	return 0;
}