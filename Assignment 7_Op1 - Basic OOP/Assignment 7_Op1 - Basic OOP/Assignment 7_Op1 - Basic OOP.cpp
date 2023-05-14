

#include <iostream>
#include <string>
using namespace std;

class hanghoa
{
public:
    char mahang[2];
    char tenhang[20];
    char donvitinh[10];
    float donggia, soluong, thanhtien;
    void nhap()
    {
        cout << "Nhap ma hang : "; cin >> mahang;
        cout << "Nhap ten hang : "; cin >> tenhang;
        cout << "Nhap don vi tinh : "; cin >> donvitinh;
        cout << "Nhap don gia : "; cin >> donggia;
        cout << "Nhap so luong : "; cin >> soluong;
    }
};

class hanghoathuake : public hanghoa {
public:
    float donggiavanchuyen, congvanchuyen;
    void tinhcongvanchuyen() {
       congvanchuyen = (soluong * donggia);
       cout << "\nCong van chuyen la : ";
       cout << congvanchuyen;
    };
    void tinhthanhtien() {
        cout << "\nTong so tien la : ";
        cout << congvanchuyen * donggiavanchuyen;
    };
};

class thisinh {
public:
    
    float a, b, c, d;
    struct ThongTinCoBan {
        string ho, td, t;    
        string x, hy, tnh;
        float toan, ly, hoa;
        float diemtb = (toan + ly + hoa) / 3;
        int tuoi;
        string truong;
        double SoBaoDanh;
    };
    ThongTinCoBan Thisinh;
    void nhap() {
        cout << "Nhap truong: "; getline(cin, Thisinh.truong);
        cout << "\nNhap Ho va t trong do: ";
        cout << "\n- Ho: "; cin >> Thisinh.ho;
        cout << "\n- ten dem: "; cin >> Thisinh.td;
        cout << "\n- ten: "; cin >> Thisinh.t;
        cout << "\nNhap tuoi tac: : "; cin >> Thisinh.tuoi;
        cout << "\nNhap so bao danh: "; cin >> Thisinh.SoBaoDanh;
        cout << "\nNhap dia tri thuong chu: ";
        getline(cin, Thisinh.x);
        cout << "\n- x: "; getline(cin, Thisinh.x);
        cout << "\n- Huyen: "; getline(cin, Thisinh.hy);
        cout << "\n- Tinh: "; getline(cin, Thisinh.tnh);
        cout << "\nNhap diem thi cac mon: ";
        cout << "\n- Toan: "; cin >> Thisinh.toan;
        cout << "\n- Ly: "; cin >> Thisinh.ly;
        cout << "\n- Hoa: "; cin >> Thisinh.hoa;
    }
    void lamtron() {
        c = a; b = floor(a); d = c - b;
        if (d == 0) {
            cout << b;
        }else
        if (0 < d && d < 0.25) {
            cout << b + 0.25;
        }else
        if (0.25 <= d && d < 0.5) {
                cout << b + 0.5;
        }else
        if (0.5 <= d && d < 0.75) {
                    cout << b + 0.75;
        }else
        if (0.75 <= d && d < 1) {
                        cout << b + 1;
        }
    }
    void in() {
        cout << "\nTen truong: " << Thisinh.truong;
        cout << "\nHo va ten: " << Thisinh.ho << " "
            << Thisinh.td << " " << Thisinh.t;
        cout << "\nTuoi: " << Thisinh.tuoi;
        cout << "\nSo bao danh: " << Thisinh.SoBaoDanh;
        cout << "\nDia chi thuong tru: " << "\nXa "
            << Thisinh.x << ", huyen "
            << Thisinh.hy << ", tinh " << Thisinh.tnh;
        cout << "\nDiem thi cac mon cua thi sinh la: " << "\nToan: ";
        a = Thisinh.toan; lamtron(); cout << "\nLy: ";
        a = Thisinh.ly; lamtron(); cout << "\nHoa: ";
        a = Thisinh.hoa; cout; lamtron();

               
    }
};

class danhsachthisinh : public thisinh {
public:
    struct ThongTinCoBan D[100];
    struct ThongTinCoBan N[100];
    int n, i;
    void nhapdanhsachthisinh() {
        cout << " So luong thi sinh dang ky: ";
        cin >> n;
        for (i = 0; i <= n - 1; i++) {
            cout << "\n Thi sinh thu: " << i + 1;
            cout << "\n So bao danh cua thi sinh: "; cin >> D[i].SoBaoDanh;
            cout << "\n Ho cua thi sinh: "; cin >> D[i].ho;
            cout << "\n Ten dem cua thi sinh: "; cin >> D[i].td;
            cout << "\n Ten cua thi sinh: "; cin >> D[i].t;
            cout << "\n Xa cua thi sinh: "; cin >> D[i].x;
            cout << "\n Huyen cua thi sinh: "; cin >> D[i].hy;
            cout << "\n Tinh cua thi sinh: "; cin >> D[i].tnh;
            cout << "\n Diem toan: "; cin >> D[i].toan;
            cout << "\n Diem ly: "; cin >> D[i].ly;
            cout << "\n Diem hoa: "; cin >> D[i].hoa;
            D[i].diemtb = (D[i].toan + D[i].ly + D[i].hoa) / 3;
        }
    }
    void InDanhSach() {
        cout << "\n  Bang thi sinh \n" << " ";
        cout << "\n\t Ten thi sinh" << "\tTuoi thi sinh" << "\tsbd" << "\t Que quan" << "\tToan" << "\tLy" << "\tHoa" << "\tTB";
        for (i = 0; i <= n - 1; i++) {
            cout << "\n\t" << D[i].ho << " " << D[i].td << " " << D[i].t;
            cout << "\t" << D[i].tuoi;
            cout << "\t" << D[i].SoBaoDanh;
            cout << "\t" << D[i].x << " " << D[i].hy << " " << D[i].tnh;
            cout << "\t" << D[i].toan << "\t" << D[i].ly << "\t" << D[i].hoa;
            cout << "\t" << D[i].diemtb;
        }
    }
    void Danhsachmau() {
        N[0].ho = { "Dat" }; N[1].ho = { "Tran" }; N[2].ho = { "Pham" }; N[3].ho = { "Hoang" };
        N[0].td = { "Tieu" }; N[1].td = { "Than" }; N[2].td = { "Cuong" }; N[3].td = { "Van" };
        N[0].t = { "Duong" }; N[1].t = { "Tim" }; N[2].t = { "Huy" }; N[3].t = { "Tham" };
        N[0].tuoi = { 23 }; N[1].tuoi = { 23 }; N[2].tuoi = { 77 }; N[3].tuoi = { 19 };
        N[0].SoBaoDanh = { 16022 }; N[1].SoBaoDanh = { 16022 }; 
        N[2].SoBaoDanh = { 16029 }; N[3].SoBaoDanh = { 16000 };
        N[0].x = { "Boi Cau 1" }; N[1].x = { "Thach That" }; N[2].x = { "Huyen Dieu" }; N[3].x = { "Cau Giay" };
        N[0].hy = { "Ngu Quen" }; N[1].hy = { "CM NO" }; N[2].hy = { "Pho Dich" }; N[3].hy = { "Ngu Di" };
        N[0].tnh = { "Lai Chau" }; N[1].tnh = { "Chan" }; N[2].tnh = { "Dong Bang" }; N[3].tnh = { "Thu Kiem" };
        N[0].toan = { 8.54 }; N[1].toan = { 8.67 };
        N[2].toan = { 4.45 }; N[3].toan = { 7.45 };
        N[0].ly = { 9.67 }; N[1].ly = { 8.43 };
        N[2].ly = { 6.67 }; N[3].ly = { 5.34 };
        N[0].hoa = { 4.67 }; N[1].hoa = { 2.45 };
        N[2].hoa = { 3.45 }; N[3].hoa = { 1.45 };
        N[0].diemtb = { 7.62 }; N[1].diemtb = { 6.51 };
        N[2].diemtb = { 4.85 }; N[3].diemtb = { 4.74 };
        cout << "\n  Bang thi sinh mau \n" << " ";
        cout << "\n\t Ten thi sinh" << "\tTuoi" << "\tsbd" << "\t Que quan" << "\tToan" << "\tLy" << "\tHoa" << "\tTB";
        for (i = 0; i < 4; i++) {
            cout << "\n\t" << N[i].ho << " " << N[i].td << " " << N[i].t;
            cout << "\t" << N[i].tuoi;
            cout << "\t" << N[i].SoBaoDanh;
            cout << "\t" << N[i].x;
            cout << "\t" << N[i].toan << "\t" << N[i].ly << "\t" << N[i].hoa;
            cout << "\t" << N[i].diemtb;
        }
    }
};







int main()
{
    //Bai1:

    //thisinh ThaiDuong;
    //ThaiDuong.nhap();
    //ThaiDuong.in();

    //Bai2:

    //danhsachthisinh ThaiDuong1;
    //ThaiDuong1.Danhsachmau();
    //cout << "\n\n";
    //ThaiDuong1.nhapdanhsachthisinh();
    //ThaiDuong1.InDanhSach();

    cout << "\n\n\n";

    return 0;
}


