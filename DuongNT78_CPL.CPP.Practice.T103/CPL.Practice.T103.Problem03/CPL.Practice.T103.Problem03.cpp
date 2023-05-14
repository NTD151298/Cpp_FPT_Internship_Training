#include <iostream>
#include <cmath>
#include<string>

using namespace std;



void numberOccurrences(char* str, char c){ // Ham tinh so luong ky tu xuat hien.

    int i, j = 0, index[1000];
    string s = str; // Bien char array ve string.

    for (i = 0; i < s.length(); i++) { 
        if (s[i] == c) { // Gan gia tri vi tri cua ky tu xuathien lien tuc vao mang index.
            index[j] = i;
            j++;
        }
    }
    cout << "The number of occurrences of " << c << " in string is " << j << " index = [ ";
    for (i = 0; i < j; i++) { // Khai bao vi tri ky tu do trong mang index moi duoc nhap.
        cout << index[i] << " ";
    }
    cout << "]";
}



int main()
{
    char* str = new char[1000];
    char c;
    cout << "Please enter the strings: "; cin.getline(str,100); // Nhap char array co dau cach
    cout << "Now enter the character need to find: ";  cin >> c; // Nhap ky tu can tim
    numberOccurrences(str, c);


    
    
    
    cout << "\n\n\n";
    return 0;
}

