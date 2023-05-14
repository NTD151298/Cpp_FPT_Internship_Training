

#include <iostream>
#include <string>
#include <ctime>


using namespace std;

class Bai1_WordOrderReverse_cpp {
public:
    void Nhapchuoi()
    {
        int i, j;
        string f = " ", s(50, '\0'); // Gán f bằng dấu cách
        // Giả sử string s = "mot hai ba bon nam sau bay tam chin muoi"
        getline(cin, s); // Nhập chuỗi s

        for (i = s.length(); i > -1; i--) { // Vòng lặp đi từ ký tự cuối của chuỗi s, MAX chuỗi s là s.length
            if (s[i] == f[0]) { // Nếu đang đi xuống cuối gặp phải khoảng trống f
                for (j = i; j < s.length(); j++) // Vòng lặp nhập ký tự đi xuôi từ khoảng tróng
                {
                    if (s[j + 1] == f[0]) // Nếu gặp khoảng trống thì thoát
                        break;
                    cout << s[j + 1];    // In ra ký tự đi từ khoảng trống đi xuôi
                }
                cout << " "; // Hết vòng lặp cách dòng  
            }

            if (&s[i] == &s[0]) // Khi đến giá trị con trỏ ký tự cuối cùng s[0] thì phải có vòng lặp mới vì điều kiện i > -1
            {
                for (j = i; j < s.length(); j++)
                {
                    cout << s[j];  // In ra ký tự đi từ vị trí s[0] 

                    if (s[j] == f[0]) // Nếu gặp khoảng trống thì thoát
                        break;
                }
            }
        }
    }
};

class XoaMotArray {
public:
    int temp, a, i, x[10];
    void Xoa() {
        for (i = 0; i < 10; i++) {
            x[i] = i * 2;
        }
        cout << "Gia tri cua array x: \n";
        for (i = 0; i < 10; i++) {
            cout << x[i] << " ";
        }
        cout << "\nXoa 1 gia tri trong array x: \n";
        cin >> a;
        for (i = 0; i < 10; i++) {
            if (a == x[i]) {
                if (i == 0) {
                    for (i = 1; i < 10; i++) {
                        cout << x[i] << " ";
                    }
                    return;
                }
                else {
                    for (i; i > 0; i--) {
                        temp = x[i - 1];
                        x[i - 1] = x[i];
                        x[i] = temp;
                    }
                    for (i = 1; i < 10; i++) {
                        cout << x[i] << " ";
                    }
                    return;
                }
            }
        }
        return;
    }
};

class Bai3_Structure_ManageStudent_cpp {
public:
    struct SinhVien {
        string acc, ho, ten;
        int msv;
    };
    string acc1, ho1, ten1;
    int msv1 = 0;
    struct SinhVien D[100];
    int n, i;
    void nhapSinhVien() {
        cout << "Nhap so luong sinh vien: ";
        cin >> n;
        for (i = 0; i <= n - 1; i++) {
            cout << "\n Sinh vien thu: " << i + 1;
            cout << "\n Ma so sinh vien thu " << i + 1 << ": "; cin >> D[i].msv;
            cout << "\n Ho sinh vien thu " << i + 1 << ": "; cin >> D[i].ho;
            cout << "\n Ten sinh vien thu " << i + 1 << ": "; cin >> D[i].ten;
            cout << "\n Account sinh vien thu " << i + 1 << ": "; cin >> D[i].acc;
        }
    }
    void inSinhVien() {
        cout << "\n\t Bang thi sinh \n\n";
        cout << "STT\t" << "MaSoSV\t" << "HoSV\t" << "TenSV\t" << "AccountSV";
        for (i = 0; i <= n - 1; i++) {
            cout << "\n" << i + 1;
            cout << "\t" << D[i].msv;
            cout << "\t" << D[i].ho;
            cout << "\t" << D[i].ten;
            cout << "\t" << D[i].acc;
        }
    }
    void timkiem() {
        cout << "\n\nNhap account can tim kiem: ";
        cin >> acc1;
        for (i = 0; i <= n - 1; i++) {
            if (acc1 == D[i].acc) {          
                cout << "\nThong tin co ban cua sinh vien do: \n";
                cout << "STT\t" << "MaSoSV\t" << "HoSV\t" << "TenSV\t" << "AccountSV";
                cout << "\n" << i + 1;
                cout << "\t" << D[i].msv;
                cout << "\t" << D[i].ho;
                cout << "\t" << D[i].ten;
                cout << "\t" << D[i].acc;
                return;
            }
        }
        cout << "\nKhong tim thay thong tin cua sinh vien do.";
    }
    void xoasinhvien() {
        cout << "\n\nNhap account can xoa: ";
        cin >> acc1;
        for (i = 0; i <= n - 1; i++) {
            if (acc1 == D[i].acc) {
                if (i == 0) {
                    cout << "\n\t Bang thi sinh moi \n\n";
                    cout << "STT\t" << "MaSoSV\t" << "HoSV\t" << "TenSV\t" << "AccountSV";
                    for (i = 1; i <= n - 1; i++) {
                        cout << "\n" << i;
                        cout << "\t" << D[i].msv;
                        cout << "\t" << D[i].ho;
                        cout << "\t" << D[i].ten;
                        cout << "\t" << D[i].acc;
                    }
                    return;
                }               
                else {
                    for (i; i > 0; i--) {
                        ho1 = D[i - 1].ho;
                        ten1 = D[i - 1].ten;
                        acc1 = D[i - 1].acc;
                        msv1 = D[i - 1].msv;
                        D[i - 1].ho = D[i].ho;
                        D[i - 1].ten = D[i].ten;
                        D[i - 1].acc = D[i].acc;
                        D[i - 1].msv = D[i].msv;
                        D[i].ho = ho1;
                        D[i].ten = ten1;
                        D[i].acc = acc1;
                        D[i].msv = msv1;
                    }                   
                        cout << "\n\t Bang thi sinh moi \n\n";
                        cout << "STT\t" << "MaSoSV\t" << "HoSV\t" << "TenSV\t" << "AccountSV";
                        for (i = 1; i <= n - 1; i++) {
                            cout << "\n" << i;
                            cout << "\t" << D[i].msv;
                            cout << "\t" << D[i].ho;
                            cout << "\t" << D[i].ten;
                            cout << "\t" << D[i].acc;
                        }                                                                                
                    return;
                }
                
            }            
        }
        cout << "\nKhong tim thay thong tin cua sinh vien do.";
        return;
    }
};

int main ()
{
    
    Bai1_WordOrderReverse_cpp D1;
    D1.Nhapchuoi();

    cout << "\n\n";

    Bai3_Structure_ManageStudent_cpp D3;
    D3.nhapSinhVien();
    D3.inSinhVien();
    D3.timkiem();
    D3.xoasinhvien();

    cout << "\n\n\n";

    return 0;
}
  
 

