#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    /*
    string chu;
    int a, b, c, d;
    getline(cin, chu);
    cout << chu << endl; 
    cout << "So a la: "; cin >> a;
    cout << "So b la: "; cin >> b;
    string result = (a < b) ? "a nho hon b" : "b nho hon a";
    cout << endl << result;
    
    int day ;
    cout << "Today is : ";
    cin >> day;
    switch (day) {
    case 1:
        cout << " dcm ";
        break;
    case 2:
        cout << " caicc ";
        break;
    case 100:
        cout << " mot tram ";
        break;
    default:
        cout << " Co cai nit";
    }
    // Outputs "Thursday" (day 4)
    

    cin >> a;
    b = 0; 
    while (a <= 10) {
        while (b <= 5) {
            cout << b << endl;
            b++;
        }
        cout << "So a la :" << a <<endl;
        a++;
        b = 0;
    }
    int time1;
    cin >> time1;

    do {
        cout << "make game";
        break;
    } while (time1 <= 6);
    string f;
    getline(cin, f);
    cout << f;
    
    for (int i = 0; i < 10; i++) {
        cout << "Day la dong thu " << i << endl;
        for (int j = 0; j < 5; j++) {
            cout << j << endl;
        }
    }
    string a = "thi chi co quen ma thoi", b = "Dung thu cai", c = "cach tab", d;
    cout << "khong choi C++" << a << "\n" << "\t" << b << "\t" << c << endl;
        getline(cin, d);
        cout << endl << "Noi 0" << "\t" << d;
        
    // Nghich gi bay gio la tro choi minecraft
    string a[2] = { "Mine", "Craft" };
    string b[] = { "Cung", "La", "Mot", "Tro", "Choi", "Ca" };

    cout << a[1] << " " << b[3] << endl;
    for (int i = 0; i < 6; i++) {
        cout << endl << b[i] << endl;
        for (int o = 0; o < 2; o++) {
            cout << a[o] << " ";
        }
    }
    cout << "Nghich di nghich lai may cai ham cu coi nhu choi game";
    

    string c[] = { "Dopamine" }, a = "1", b = "a", d = "as";
    cout << sizeof(c) << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(d) << endl;
    */

    string letters[4][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" },
    { "AC", "AB", "AS", "AO" },
    { "Ea", "Fa", "Gs", "Hs" }
    };

    int Matran[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << Matran[i][j] << " ";
            if (j == 2) cout << endl;
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << "\n";
    }
    
    
    cout << "Cai nay cung la choi khong kem";
    
    

    for (int i = 0; i < 5; i++) {
        cout << "\n";
    }
    return 0;
}