

#include <iostream>
using namespace std;

void sumofFibonacii() {
    int a[100], i, f1 = 0, f2 = 1, sum, tong = 0;
    long n;
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << tong << " ";
        a[i] = tong;
        tong = f1 + f2;
        f1 = f2;
        f2 = tong;
    }
    cout << "\nLuu mang array a: \n";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\nSum cua array: \n";
    for (i = 0; i < n; i++) {
        sum = a[i] + a[i];
    }
    cout << sum;
}

int main()
{
    sumofFibonacii();

}


