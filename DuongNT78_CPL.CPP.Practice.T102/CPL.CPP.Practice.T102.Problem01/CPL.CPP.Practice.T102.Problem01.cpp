
#include <iostream>
#include <cmath>
#include <string>

using namespace std;


void typeOfTriangle() {

    
    int i;
    float AB, AC, BC, a[6];
    
    cout << "Input: ";
    for (i = 0; i < 6; i++) {
        cin >> a[i];
    }
    cout << "New array is: ";
    for (i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    AB = sqrt(((a[2] - a[0]) * (a[2] - a[0])) + ((a[3] - a[1]) * (a[3] - a[1]))); // Calculate length of AB
    AC = sqrt(((a[4] - a[0]) * (a[4] - a[0])) + ((a[5] - a[1]) * (a[5] - a[1]))); // Calculate length of AC
    BC = sqrt(((a[4] - a[2]) * (a[4] - a[2])) + ((a[5] - a[3]) * (a[5] - a[3]))); // Calculate length of BC
    cout << AB << endl;
    cout << AC << endl;
    cout << BC << endl;
    if (AB + AC > BC && AC + BC > AB && AB + BC > AC) { // Check if triangle is a Triangle
        if (BC * BC == AB * AB + AC * AC || AC * AC == AB * AB + BC * BC || AB * AB == BC * BC + AC * AC) {
            if (AB == AC || AC == BC || AB == BC) { // Check if triangle is Right
                cout << "This triangle is Right-Isosceles" << "\n"; // Check if triangle is Right Isosceles
            }
            cout << "This triangle is Right" << "\n";
        }
        else if (AB == AC == BC) {  // Check if triangle is Equilateral
            cout << "This triangle is Equilateral" << "\n";
        }
        else if (AB == AC || AC == BC || AB == BC) {    // Check if triangle is Isosceles
            cout << "This triangle is Isosceles" << "\n";
        }
        else {  // Check if triangle is Normal
            cout << "This triangle is Normal" << "\n";
        }
    }
    else {
        cout << "This is not a Triangle!" << "\n";
    }
}




int main()
{   
    typeOfTriangle();
    
    
    
    cout << "\n\n\n";
    return 0;

    /*
    
    a0 a1 a2 a3 a4 a5
    Ax Ay Bx By Cx Cy
    
    */
}

