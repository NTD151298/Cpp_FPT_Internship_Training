

#include <iostream>
#include <cmath>

using namespace std;

/*Bài 1. [array_input1.cpp]
Viết chương trình đọc vào số nguyên dương n, cấp phát động một mảng n phần tử kiểu int, sau đó đọc
tiếp n số nguyên vào mảng này. In lại dãy số nguyên vừa đọc.
*/

int main()
{
    int n, i, arr1[100];
    
    do 
    {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);

    for (i = 1; i <= n; i++) 
    {
        cout << "Nhap so thu " << i << " : ";
        cin >> arr1[i];
        cout << endl;
    }

    cout << "Mang duoc nhap la :[ ";

    for (i = 1; i <= n; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << "]";

    cout << "\n\n\n";
    /*
     Bài 2.[array_input3.cpp]
    Viết hàm inputArrayExtend đọc các số nguyên(tới khi người dùng nhập EOF) vào một mảng cấp phát động p.
        Ban đầu cấp phát mảng p kích thước bằng maxSize = 2, số phần tử n = 0.
        Với mỗi số nguyên x đọc từ bàn phím, hãy kiểm tra xem mảng p đã đầy chưa(nếu kích thước của
            mảng là maxSize = 2 và người dùng đang nhập số thứ 3 thì phép kiểm tra này trả về true).Nếu đã đầy
        thì tăng gấp đôi kích thước mảng p bằng cách :
    • cấp phát động một mảng mới q với kích thước bằng maxSize * 2
        • sao toàn bộ dữ liệu từ mảng p sang mảng q
        • thêm phần tử mới x vào q
        • giải phóng bộ nhớ hiện đang bị quản lý bởi p
        • gán p = q sau khi cấp phát động lại bộ nhớ cho p
        Dùng hàm vừa định nghĩa để nhập 1 dãy số nguyên và in lại chúng.
    */

    cout << "Bai so 2: ";
    
    int maxSize{}, * p = new int(maxSize), j, newMaxSize;
    maxSize = 2;
    cout << "Ban dau co " << maxSize << " so, So phan tu la 0" << endl;
    cout << "Nhap newMaxSize : ";
    cin >> newMaxSize;
    for (i = 0; i < newMaxSize; i++)
    {
        cout << "\nNhap phan tu so " << i << " : ";
        cin >> p[i];
    }
    if (newMaxSize == maxSize)
    {
        int maxSize2 = maxSize * 2, x = 5, * q = new int(maxSize2);
        for (j = 0; j < maxSize2; j++)
        {
            q[j] = p[j];
            cout << q[j] << " ";
        }

    }
    else 
    { 
        cout << "True";
    }
    
    cout << "\n\n\n";

    return 0;
}

