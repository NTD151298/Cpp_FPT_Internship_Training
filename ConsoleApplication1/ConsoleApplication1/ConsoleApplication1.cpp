/*// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int s, ab, g, nay1, yay1;
    bool yay = true;    bool nay = false;
    string b = "Can kich thich", a = "Neu chan nen lam di lam lai",chu;
    cout << "Hello World!\n" << b + " " + a + "\n";
    s = 5; cout << s; string l = "lam di lam lai\ntha chan chu nhu the nay tot hon";
    cout << "\n\n\n\n\n" + l << endl; 
    cin >> g;   cout << endl << " Day la so : " << g << endl << " Chan nhung tot" << endl;
    cout << "nghi den cai de ma lam" << endl; 
    cin >> ab;
    cout << endl << ab << endl;
    cin >> nay1 >> yay1;
    if (nay1 + yay1 > 0) {
        cout << yay << " la True";
        s += 19;
        cout << endl << "So s sau khi tang 19 len dc : " << s;
        s++; cout << endl << "So s them 1 dc : " << s;
    }
    else cout << nay << " la False";
    cout << "khong biet phai lam gi";
    getline (cin, chu);
    cout << chu;


    cout << "\n\n\n\n\n\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project >
        Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
*/