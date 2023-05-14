

#include <iostream>
using namespace std;

void TraoSoNguyen()
{
    int a1, b1;
    a1 = 90, b1 = 120;
    cout << "\t" << a1 << "\t" << b1 << "\n";
    int* aa1 = &a1;
    int* bb1 = &b1;
    *aa1 = 321, * bb1 = 234;
    cout << "\t" << a1 << "\t" << b1 << "\n";
}

int main()
{
    int a = 10;
    int b = 20;
    int c = a + b;
    int* aa = &a, * bb = &b;
    cout << *aa + *bb << endl;
    

    TraoSoNguyen();



    int i, Arr[10];
    int* p, sum = 0;
    p = Arr;
    for (i = 0; i < 10; i++)
    {
        cout << "Nhap vao so thu " << i + 1 << " : ";
        cin >> Arr[i];
    };
    
    
    cout << "\nSu dung con tro tinh tong:\n";
    for (i = 0; i < 10; i++)
    {
        sum = sum + p[i];
    };
    cout << sum;

    cout << "\n\n\n";
    return 0;
}

    

