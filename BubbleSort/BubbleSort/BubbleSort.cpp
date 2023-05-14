#include<iostream>
#include <iomanip>
#include<string>
using namespace std;



int main() {
	int temp = 0, i, j, n, a[100];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "\n";
	for (i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	for (i = n; i > 0; i--) {
		for (j = 1; j < i; j++) {
			if (a[j] - a[j - 1] < 0) {
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "\n\n";
	for (i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}