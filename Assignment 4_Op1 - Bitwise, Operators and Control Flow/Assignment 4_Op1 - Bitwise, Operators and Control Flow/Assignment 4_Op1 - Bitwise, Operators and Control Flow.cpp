

#include <iostream>
#include <string>
#include <cmath>
 
#define CONG(a, b)((a) + (b)) //: cộng
#define TRU(a, b)((a) - (b))//: trừ
#define NHAN(a, b)((a) * (b))//: nhân
#define CHIA(a, b)((a) / (b))//: chia
#define MAX(a,b)((a) > (b) ? (a) : (b))//: số lớn
#define MIN(a,b)((a) < (b) ? (a) : (b))//: số bé

using namespace std;

void Bai1()
{
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "\nNhap b: ";
    cin >> b;
    /*
    12 = 00001100 (In Binary)
    25 = 00011001 (In Binary)

    Bit Operation of 12 and 25
        00001100
    &   00011001
        ________
        00001000  = 8 (In decimal)
    */
    cout << "\n\n Vi du ve 'and (&)'\n";
    printf("Example #1: Bitwise AND : %d", a & b);

    /*
        12 = 00001100 (In Binary)
        25 = 00011001 (In Binary)

    Bitwise OR Operation of 12 and 25
        00001100
    |   00011001
        ________
        00011101  = 29 (In decimal)
    */
    cout << "\n\n Vi du ve 'or (|)'\n";
    printf("Example #2: Bitwise OR = %d", a | b);

    /*
        12 = 00001100 (In Binary)
        25 = 00011001 (In Binary)

    Bitwise XOR Operation of 12 and 25
        00001100
    ^   00011001
        ________
        00010101  = 21 (In decimal)
    */
    cout << "\n\n Vi du ve 'xor (^)'\n";
    printf("Example #3: Bitwise XOR = %d", a ^ b);
};

void Bai2()
{
    int n, i, j, a;
    cin >> n;
    if (n < 2) // Số nguyên tố không bé hơn 2
    {
        cout << "So " << n << " khong phai so nguyen to";
        return;
    }
    for (j = 2; j <= n; j++) // Vòng lặp tìm số nguyên tố
    {
        a = 0;
        for (i = 1; i < j; i++)
        {
            if (j % i == 0) {
                a++;   
            }
        }    
        if (a == 1) // Kiểm tra số a được 1 lần chia là số nguyên tố
        {
            cout << j << " ";
        }
    }
     
}

void Bai3() 
{
    float a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "\nNhap b: ";
    cin >> b;
    cout << "\nKet qua phep cong la: "<< CONG(a, b) << "\n";
    cout << "Ket qua phep tru la: " << TRU(a, b) << "\n";
    cout << "Ket qua phep nhan la: " << NHAN(a, b) << "\n";
    cout << "Ket qua phep chia la: " << CHIA(a, b) << "\n";
    cout << "So to nhat la: " << MAX(a, b) << "\n";
    cout << "So be nhat la la: " << MIN(a, b) << "\n";
}



int main()
{
    //Bai1();
    Bai2();
    //Bai3();
  
    cout << "\n\n\n";
    return 0;
}


