

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Matrix {
public:
    int i, j, k;
    float mt1[10][10], mt2[10][10], mt3[10][10], mt21[10][10];
    int cot1, dong1, cot2, dong2, cot3, dong3, n, m;
    float b, a = 0, det = 0;
    void Matran1() {
        cout << "Nhap so cot ma tran 1: ";
        cin >> cot1;
        cout << "Nhap so dong ma tran 1: ";
        cin >> dong1;
        cout << "\nNhap tung phan tu cua ma tran 1: \n";
        for (i = 0; i < dong1; i++) {
            for (j = 0; j < cot1; j++) {
                printf("matrix1[%d][%d] = ", i, j);
                cin >> mt1[i][j];

            }
        }
        cout << "\nMa tran 1 la: \n\n";
        for (i = 0; i < dong1; i++) {
            for (j = 0; j < cot1; j++) {
                cout << mt1[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    void Matran2() {
        cout << "\n\nNhap so cot ma tran 2: ";
        cin >> cot2;
        cout << "Nhap so dong ma tran 2: ";
        cin >> dong2;
        cout << "\nNhap tung phan tu cua ma tran 2: \n";
        for (i = 0; i < dong2; i++) {
            for (j = 0; j < cot2; j++) {
                printf("Matrix2[%d][%d] = ", i, j);
                cin >> mt2[i][j];

            }
        }
        cout << "\nMa tran 2 la: \n\n";
        for (i = 0; i < dong2; i++) {
            for (j = 0; j < cot2; j++) {
                cout << mt2[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    void CongMaTran() {
        if (dong1 != dong2 || cot1 != cot2) {
            cout << "\n(+)Hai ma tran khong cung kich co, khong the cong.\n";
            return;
        }
        cot3 = cot1; dong3 = dong2;
        cout << "\n(+)Ma tran tong cua 2 ma tran la: \n\n";
        for (i = 0; i < dong3; i++) {
            for (j = 0; j < cot3; j++) {
                mt3[i][j] = mt1[i][j] + mt2[i][j];
                cout << mt3[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    void TruMaTran() {
        if (dong1 != dong2 || cot1 != cot2) {
            cout << "\n(-)Hai ma tran khong cung kich co, khong the tru.\n";
            return;
        }
        cot3 = cot1; dong3 = dong2;
        cout << "\n(-)Ma tran hieu cua 2 ma tran la: \n\n";
        for (i = 0; i < dong3; i++) {
            for (j = 0; j < cot3; j++) {
                mt3[i][j] = mt1[i][j] - mt2[i][j];
                cout << mt3[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    void NhanMaTran() {
        if (cot1 != dong2) {
            cout << "\n(*)Hai ma tran khong the nhan cho nhau duoc.\n";
            return;
        }
        cot3 = cot2; dong3 = dong1;
        cout << "\n(*)Ma tran nhan cua 2 ma tran la: \n\n";
        for (i = 0; i < dong3; i++) {
            for (j = 0; j < cot3; j++) {
                mt3[i][j] = 0;
                for (k = 0; k < cot1; k++) {
                    mt3[i][j] = mt3[i][j] + (mt1[i][k] * mt2[k][j]);
                    if (k == cot1 - 1) {
                        cout << mt3[i][j] << "\t";
                    }
                }

            }
            cout << "\n";
        }
    }
    void ChiaMaTran() {
        if (cot1 != dong2) {
            cout << "\n(/)Ma tran 1 khong cung kich co voi ma tran 2 moi.\n";
            return;
        }
        cout << "\n(/)Ma tran 2 la ma tran bi chia.";
        if (cot2 == dong2) {
            cout << "\n(/)Ma tran 2 vuong va co nghich dao.";
            // Tim Dinh thuc det ma tran 2.
            for (i = 0; i < dong2; i++)
                det = det + (mt2[0][i] * (mt2[1][(i + 1) % 3] * mt2[2][(i + 2) % 3] -
                    mt2[1][(i + 2) % 3] * mt2[2][(i + 1) % 3]));
            cout << "\n(/)Dinh thuc ma tran la: " << det << "\n";
            if (det != 0) {
                cout << "(/)Vay ma tran 2 kha nghich.\n";
                for (i = 0; i < dong2; i++) {
                    for (j = 0; j < cot2; j++) {
                        b = (((mt2[(j + 1) % 3][(i + 1) % 3] * mt2[(j + 2) % 3][(i + 2) % 3]) - (mt2[(j + 1) % 3][(i + 2) % 3] * mt2[(j + 2) % 3][(i + 1) % 3])) / det);
                        a = round(b * 100) / 100.00;
                        mt21[i][j] = a;

                    }
                    cout << "\n";
                }
            }
            else if (det == 0) {
                cout << "(/)Vay ma tran 2 khong kha nghich.\n";
                cout << "(/)Khong the thuc hien phep chia.\n";
            }
        }
        else if (cot2 != dong2 && cot2 != 3) {
            cout << "(/)Ma tran 2 khong vuong [3x3] va khong co nghich dao.";
            return;
        }

        cout << "(/)Nghich dao cua ma tran 2 la: \n";
        for (i = 0; i < dong2; i++) {
            for (j = 0; j < cot2; j++) {
                cout << mt21[i][j] << "\t";
            }
            cout << "\n";
        }
        cot3 = cot2; dong3 = dong1;
        cout << "\n(/)Ma tran thuong cua 2 ma tran la: \n\n";
        for (i = 0; i < dong3; i++) {
            for (j = 0; j < cot3; j++) {
                mt3[i][j] = 0;
                for (k = 0; k < cot1; k++) {
                    mt3[i][j] = mt3[i][j] + (mt1[i][k] * mt21[k][j]);
                    if (k == cot1 - 1) {
                        cout << setprecision(0) << mt3[i][j] << "\t";
                    }

                }

            }
            cout << "\n";
        }
    }
};

void matrandongian(int mt[3][3], int i, int j) {
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> mt[i][j];

        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    Matrix D;
    D.Matran1();
    D.Matran2();
    D.CongMaTran();
    D.TruMaTran();
    D.NhanMaTran();
    D.ChiaMaTran();
    cout << "\nHello World!\n";


    return 0;
}


