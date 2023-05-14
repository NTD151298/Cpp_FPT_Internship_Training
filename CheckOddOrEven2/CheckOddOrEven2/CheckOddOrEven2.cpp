

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void Cach3LanDong() {
    for (int i = 0; i < 3; i++)
        cout << endl;
}



int main()
{
    int x1, x2, y1, y2, z1, z2;

    int VecToAB[2] = { y1 - x1, y2 - x2 }; // Vector AB
    int VecToAC[2] = { z1 - x1, z2 - x2 }; // Vector AC
    int VecToBC[2] = { z1 - y1, z2 - y2 }; // Vector BC

    cout << " Nhap toa do x cua AB: " << endl;    cin >> x1; // Nhap vao x cua AB
    cout << " Nhap toa do y cua AB: " << endl;    cin >> x2; // Nhap vao y cua AB
    cout << " Nhap toa do x cua AC: " << endl;    cin >> y1; // Nhap vao x cua AC
    cout << " Nhap toa do y cua AC: " << endl;    cin >> y2; // Nhap vao y cua AC
    cout << " Nhap toa do x cua BC: " << endl;    cin >> z1; // Nhap vao x cua BC
    cout << " Nhap toa do y cua BC: " << endl;    cin >> z2; // Nhap vao y cua BC

    Cach3LanDong();

    cout << " Ta Kiem Tra xem 3 diem tren co tao thanh tam giac khong. " << endl;

    if (VecToAB[0] / VecToAC[0] != VecToAB[1] / VecToAC[1] ||  // a1 / b1 != a2 / b2
        VecToAC[0] / VecToBC[0] != VecToAC[1] / VecToBC[1]) {  // => AB khong cung phuong voi AC
        cout << " Vi AB hoac BC khong cung phuong voi AC => 3 dien A, B, C tao thanh 1 tam giac " << endl;


    }

}


