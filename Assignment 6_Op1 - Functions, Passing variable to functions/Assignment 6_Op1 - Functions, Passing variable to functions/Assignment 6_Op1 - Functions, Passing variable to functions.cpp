#include<iostream>
#include <iomanip>
#include<string>
using namespace std;

void incr1(int& x) { // increase 1
	x++;
}
int incr2(int x) { // increase 1
	return x++;
}

void Bai1swap(int& evenNumber, int& oddNumber)
{
	int temp = 0;
	temp = evenNumber;
	evenNumber = oddNumber;
	oddNumber = temp;
}

void Bai2compare(string a, string b)
{
	if (a.length() > b.length()) {
		cout << a;
	}
	else cout << b;

}

int main()
{
	string string1 = "abc", string2 = "qwer";
	Bai2compare(string1, string2);

	cout << "\n\n";

	int evenNumber = 2;
	int oddNumber = 3;
	cout << "evenNumber: " << evenNumber << " ,oddNumber : " << oddNumber << endl;
	Bai1swap(evenNumber, oddNumber);
	cout << "evenNumber: " << evenNumber << " ,oddNumber : " << oddNumber << endl;
	cout << "\n";
	int v = 2;
	incr1(v);
	v = incr2(v);
	cout << v;
	
	return 0;
}

