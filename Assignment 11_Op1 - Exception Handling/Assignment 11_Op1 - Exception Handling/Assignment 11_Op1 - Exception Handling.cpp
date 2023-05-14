

#include <iostream>
#include <string>
#include<conio.h>
#include <exception>

using namespace std;

class Bai1 {
public:
    void HamBatKySuDungTryTatchThrow() {
        try {
            int a;
            cout << "Nhap 1 so bat ky : ";
            cin >> a;
            if (a < 10) {
                cout << "\nSo nhap qua be.";
            }
            else {
                throw(a);
            }
        }
        catch (int b) {
            cout << "\nToi khong biet cai gi dang dien ra ca.\n";
            cout << "So chuan la : " << b;
            cout << "\n";
        }
    }
    
    void MultipleCatchBlocks() {
        try {
            int f;
            cout << "\nNhap f de : ";
            cin >> f;
            if (f > 10) {
                cout << "\nDuoc.";
            }
            else {
                throw(f);
            };
        }
        catch (char f) {
            cout << "\nDAY LA CHAR f.";
        }
        catch (unsigned short int i) {
            cout << "\nDay la unsigned short int i.";
        }
        catch (int j) {
            cout << "\nQuay ve la int j.";
        }
        catch (string bn) {
            cout << "\nQuay ve la string bn.";
        }
        
        cout << "\n Hello 1world.";
    }

    void NestedException() {
        int now = 123;
        cout << "Nested Exception Handling\n"; // Mot chuong trinh Nested Exception don gian
        try {
            try {
                throw now;
            }
            catch (int here) {
                cout << "Nested Exception Catch Value : " << here; // Nested vo tinh bat duoc
            }
        }
        catch (...) {
            cout << "Vo tinh bat duoc mac dinh";
        }

    }
};


class Bai2 {
public:
    void Phan1DivisionByZeroNotPossible() {
        int a = 10, b = 0, c;
        try
        {
            if (b == 0){                
                throw "Division by zero not possible";
                c = a / b;
            }
        }
        catch (char const* ex){
            cout << ex;
        }        
    }

    void SpecialException() {
        int x[3] = { -1,2 };
        for (int i = 0; i < 2; i++) {
            int ex = x[i];
            try           {
                if (ex > 0)
                    throw ex;
                else
                    throw 'ex';
            }
            catch (int ex){
                cout << "Special exception\n";
            }
        }
    }

    void OutputIsX() {
        long long i = 465631231331233567;
        try{
            char* text = new char[123331612312];
        }
        catch (bad_alloc& e){
            cout << "X";
        }
        catch (exception& e){
            cout << "Y";
        }
        catch (...){
            cout << "Z";
        }

    }
};


int main()
{
    // Bắt đầu bài bằng cahcs bỏ dấu // trước DoIt1 và DoIt2

    Bai1 DoIt1;
    //DoIt1.HamBatKySuDungTryTatchThrow();
    //DoIt1.MultipleCatchBlocks();
    //DoIt1.NestedException();
    
    Bai2 DoIt2;
    //DoIt2.Phan1DivisionByZeroNotPossible();
    //DoIt2.SpecialException();
    //DoIt2.OutputIsX();
    
  

    cout << "\n\nHello World!\n\n";
    return 0;
}


