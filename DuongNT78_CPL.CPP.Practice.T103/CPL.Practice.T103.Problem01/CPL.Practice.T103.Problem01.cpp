#include <iostream>
#include <cmath>
#include<string>

using namespace std;

bool isPerfectSquareNumber(long long int a) {
    if (0 <= a && a <= 4294967295) { //Kiem tra dieu kien ban dau.
        long long b = sqrt(a); // Dinh nghia gia tri b la can bac hai cua a.
        return (b * b == a); // Tra ve b * b = a.
    }
    return false; //Khong thi se tra ve FALSE neu khong dung dieu kien.
}

int main()
{
    long long a; // Dinh nghia a
    cout << "Please enter a number: "; cin >> a; // Nhap a.
    long long b = sqrt(a); // Dinh nghia b = can bac 2 a.
    if (isPerfectSquareNumber(a)) // Chay ham kiem tra so can bac hai hoan hao.
        cout << a << " is a Perfect Square Number because " << a 
        << " = " << b <<" * " << b; // In ket qua a va b neu dung
    else
        cout << a << " is not a Perfect Square Number because " << a 
        << " != " << b << " * " << b; // In ket qua a va b neu sai

    cout << "\n\n\n";
    return 0;
}


