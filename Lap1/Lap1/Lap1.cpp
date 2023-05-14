

#include <iostream>
#include <cmath>
#include <string>

using namespace std;



int main()
{
    float x1, x2, y1, y2, z1, z2; // Toa do x, y cua cac diem A, B ,C
    float ab1, ab2, ac1, ac2, bc1, bc2; // Toa do x, y cua vector AB, AC ,BC
    float ca1, ca2, cb1, cb2, ba1, ba2; // Toa do x, y cua vector CA, CB ,BA
    float AB, AC, BC; // Do dai cac vector AB, AC ,BC

    cout << endl << " Nhap toa do x cua A: ";    cin >> x1; // Nhap vao x cua vector AB
    cout << endl << " Nhap toa do y cua A: ";    cin >> x2; // Nhap vao y cua vector AB
    cout << endl << " Nhap toa do x cua B: ";    cin >> y1; // Nhap vao x cua vector AC
    cout << endl << " Nhap toa do y cua B: ";    cin >> y2; // Nhap vao y cua vector AC
    cout << endl << " Nhap toa do x cua C: ";    cin >> z1; // Nhap vao x cua vector BC
    cout << endl << " Nhap toa do y cua C: ";    cin >> z2; // Nhap vao y cua vector BC

    cout << endl << endl;

    ab1 = (y1 - x1); ab2 = (y2 - x2); ac1 = (z1 - x1); // Gia tri toa do vector AB, AC
    ac2 = (z2 - x2); bc1 = (z1 - y1); bc2 = (z2 - x2); // Gia tri toa do vector AC, BC
    ca1 = (x1 - z1); ca2 = (x2 - z2); cb1 = (y1 - z1); // Gia tri toa do vector CA, CB
    cb2 = (y2 - z2); ba1 = (x1 - y1); ba2 = (x2 - y2); // Gia tri toa do vector CB, BA

    cout << " ABx = " << ab1;    cout << " ,ABy = " << ab2;
    cout << " ,ACx = " << ac1;    cout << " ,ACy = " << ac2;
    cout << " ,BCx = " << bc1;    cout << " ,BCy = " << bc2; cout << endl;
    cout << " ,CAx = " << ca1;    cout << " ,CAy = " << ca2;
    cout << " ,CBx = " << cb1;    cout << " ,CBy = " << cb2;
    cout << " ,BAx = " << ba1;    cout << " ,BAy = " << ba2; cout << endl;

    AB = sqrt(ab1 * ab1 + ab2 * ab2); // Tinh do dai AB
    AC = sqrt(ac1 * ac1 + ac2 * ac2); // Tinh do dai AC
    BC = sqrt(bc1 * bc1 + bc2 * bc2); // Tinh do dai BC

    cout << " AB = " << AB << "\t";
    cout << " AC = " << AC << "\t";
    cout << " BC = " << BC << "\t";

    cout << endl << endl << endl;

    cout << " Ta Kiem Tra xem 3 diem tren co tao thanh tam giac khong. " << endl;

    if (ab1 / ac1 != ab2 / ac2) { // Kiem tra Phuong cua AB va AC
        cout << " AB khong cung phuong voi AC " << endl;
        if (ca1 / cb1 != ca2 / cb2) { // Kiem tra Phuong CA voi CB         
            cout << " CA khong cung phuong voi CB" << endl;
            cout << " => 3 dien A, B, C tao thanh 1 tam giac" << endl << endl;
            if (ab1 * ac1 + ab2 * ac2 == 0) { // Kiem tra tam giac vuong tai A
                cout << " Vi vector AB vuong goc voi vector AC " << endl;
                cout << " => Tam giac ABC la tam giac vuong tai A" << endl;
                // Kiem tra tam giac vuong can tai A
                if (AB == AC) cout << " Vi AB = AC => Tam giac ABC vuong can tai A";
            }
            else
                if (ca1 * cb1 + ca2 * cb2 == 0) { // Kiem tra tam giac vuong tai C
                    cout << " Vi vector AC vuong goc voi vector BC " << endl;
                    cout << " => Tam giac ABC la tam giac vuong tai C" << endl;
                    // Kiem tra tam giac vuong can tai C
                    if (AC == BC) cout << " Vi AB = AC => Tam giac ABC vuong can tai C";
                }
                else
                    if (ba1 * bc1 + ba2 * bc2 == 0) { // Kiem tra tam giac vuong tai B
                        cout << " Vi vector AB vuong goc voi vector BC " << endl;
                        cout << " => Tam giac ABC la tam giac vuong tai B" << endl;
                        // Kiem tra tam giac vuong can tai B
                        if (AB == BC) cout << " Vi AB = BC => Tam giac ABC vuong can tai B";
                    }
                    else
                        if (AB == AC == BC) { //Kiem tra tam giac deu
                            cout << " Vi AB = AC = BC nen => tam giac ABC la tam giac deu";
                        }
            // Kiem tra tam giac  can tai A
                        else  if (AB == AC) cout << " Vi AB = AC => Tam giac ABC  can tai A";
            // Kiem tra tam giac  can tai C
                        else  if (AB == AC) cout << " Vi AB = AC => Tam giac ABC  can tai A";
            // Kiem tra tam giac  can tai B
                        else  if (AB == AC) cout << " Vi AB = AC => Tam giac ABC  can tai A";
        }
        else
            cout << " Vi CA voi CB cung phuong nen ba diem A, B, C khong tao thanh 1 tam giac ";
    }
    else
        cout << " Vi AB voi AC cung phuong nen ba diem A, B, C khong tao thanh 1 tam giac ";

    cout << endl << endl << endl;

    return 0;
}


