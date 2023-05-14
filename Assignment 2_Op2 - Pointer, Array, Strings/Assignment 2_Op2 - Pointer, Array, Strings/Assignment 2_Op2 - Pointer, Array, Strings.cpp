

#include <iostream>
using namespace std;

int main()
{
    /*
    
    Bài 1: Check cấp phát động
    1.	Tạo 1 con trỏ kiểu int, int *p. Cấp phát động cho con trỏ p và gán giá trị cho vùng nhớ đó, *p=10;
    2.	Khai báo 1 con trỏ int *q. q = p;
    3.	delete p 
    -	In giá trị của vùng nhờ đang trỏ bởi q xem bằng bao nhiêu?
    -	Thử compare p với NULL xem bằng NULL hay khác NULL?

    Coding tips: Sau khi delete con trỏ thì phải luôn gán con trỏ bằng NULL, nếu không con trỏ vẫn khác NULL
    (tức vẫn báo là vẫn đang trỏ vào một vùng nhớ nào đó).

    */


    /*
    
    int g, * p, * q;
    p = &g; 
    *p = 10;
    delete p;
    p = NULL;
    q = p;
    
    cout << q << "\n";

    */
   
    
    /*
   
    Bài 2: Thao tác với 1 mảng kiểu int
    Cấp phát động 1 mảng int Arr1 gồm 10 phần tử giá trị ngẫu nhiên:
    1.	Sắp xếp mảng Arr1 theo thứ tự giảm dần ( Sử dụng con trỏ để swap 2 phần tử với nhau, in ra các phần tử của mảng trước và sau khi sắp xếp).
    2.	Cấp phát động 1 mảng int Arr2 gồm 10 phần tử, copy mảng Arr1 vào mảng 2 và sắp xếp phần tử của Arr2 tăng dần. Tạo tiếp 1 mảng Arr3 có size gấp đôi Arr1, ghép Arr1 và Arr2 vào Arr3 và sắp xếp Arr3 tăng dần.
    3.	Delete vùng bộ nhớ đã cấp phát.

    */

    int Arr1[10];

    /*
    
    Bài 3: Thao tác với chuỗi
    Cấp phát động 1 mảng char Str1 gồm 10 phần tử giá trị ngẫu nhiên:
    1.	Sắp xếp mảng Str1 theo thứ tự giảm dần ( Sử dụng con trỏ để swap 2 phần tử với nhau, in ra các phần tử của mảng trước và sau khi sắp xếp).
    2.	Cấp phát động 1 mảng char Str2 gồm 10 phần tử, copy mảng Str1 vào mảng 2 và sắp xếp phần tử của Str2 tăng dần. Tạo tiếp 1 mảng Str3 có size gấp đôi Str1, ghép Str1 và Str2 vào Str3 và sắp xếp Str3 tăng dần.
    3.	Delete vùng bộ nhớ đã cấp phát.

    */

    

    /*
    
    int x, * c, ** cc, *** ccc;
    x = 1000; cout << x << "\n";
    c = &x; cout << c << "\n";
    cc = &c; cout << cc << "\n";
    ccc = &cc; cout << ccc << "\n";

    */
    

    cout << "\n\n";

    return 0;
}


