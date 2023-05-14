

#include <cstdlib>
#include <iostream>
#include <limits>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    int Matran1[3][3] = // Nhap ma tran 1
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int Matran2[3][3] = // Nhap ma tran 2
    {
        {9,8,7},
        {6,5,4},
        {3,2,1}
    };
    int MatranTong[3][3], i, j; // Nhap ma tran tong, bien i , bien j
    for ( i = 0; i < 3; i++) // Tinh ma tran 1 + ma tran 2
    {
        for ( j = 0; j < 3; j++)
            MatranTong[i][j] = Matran1[i][j] + Matran2[i][j];
    }
    
    
    cout << "Hello World!\n\n"; // In Hello world !
    
    for (i = 0; i < 3; i++) // In ma tran tong theo cach thong thuong
    {
        for (j = 0; j < 3; j++)
            cout << MatranTong[i][j] << " ";
        cout << endl;
    }
    cout << "\nIn ma tran tong theo poiter\n\n";
    
    for (i = 0; i < 3; i++) // In ma tran tong theo poiter
    {
        for (j = 0; j < 3; j++)
            cout << *(*(MatranTong + i) + j) << " ";
        cout << endl;
    }

    // Bai tap 2

    cout << "\n\nBai 2 : \n\n";
    const char* str = "HELLO";
    cout << str << endl;
    for (int i = (strlen(str) - 1); i >= 0; i--)
    {
        cout << str[i];
    }

    // Bai tap 3 

    cout << "\n\nBai 3 : \n\n";

    int n = 5, * ptr, t;
    int arr[5] = { 0, 23, 14, 12, 9 };
    for (i = 0; i < n; i++) {

        for (j = i + 1; j < n; j++) {

            if (*(ptr + j) < *(ptr + i)) {

                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    for (i = 0; i < n; i++)
        cout << " " << *(ptr + i);
    sort(n, arr);
    return 0;
}


