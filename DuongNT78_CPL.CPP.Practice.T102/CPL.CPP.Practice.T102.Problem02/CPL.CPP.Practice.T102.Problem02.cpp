
#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int cakeCuting(int n)
{
	return 1 + n * (n + 1) / 2; // Method return the maximum number of pieces the sliced cake 
}

int main()
{
	int n;
	cin >> n; // Input line
	cout << cakeCuting(n); // Output the number of pieces sliced.
	return 0;
}