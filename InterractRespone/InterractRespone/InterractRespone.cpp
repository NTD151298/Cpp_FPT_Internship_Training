

#include <iostream>
#include<string>

using namespace std;

void lam() {
    int a;
    cout << "\n\nTrang thai bay gio: \n";
    cout << "1.Chan nhi.\n2.Cu nghi den choi game.\n3.Nghi den viec kiem tien.\n4.Thoat.\nChon trang thai:\n\n";
    cin >> a;
    if (a == 1) {
        cout << "Chan nhi.\nSap thi cuoi ky roi.";
        cout << "\n------------------------------------------------------";
    }
    else if (a == 2) {
        cout << "Cu nghi den choi game.\nNo co dem lai loi ich gi khong ?";
        cout << "\n------------------------------------------------------";
    }
    else if (a == 3) {
        cout << "Nghi den viec kiem tien.\nCong viec nghi lam duoc bay gio la lap trinh.\n";
        cout << "1.Nghi den suc khoe.\n2.Nghi den code no kho lam.\nChon trang thai:\n\n";
        int b; cin >> b;
        if (b == 1) {
            cout << "Nghi den suc khoe.\nCode cham, dua suy nghi den co the va nao bo.";
            cout << "\n------------------------------------------------------";
        }
        else if (b == 2) {
            cout << "Nghi den code no kho lam.\nCu vao studio code Hello world da.";
            cout << "\n------------------------------------------------------";
        }
    }
    else if (a == 4) {
        cout << "Thoat.";
        cout << "\n------------------------------------------------------";
        return;
    }
    lam();
}

int main()
{
    lam();

    cout << "\n\n";
    return 0;
}


