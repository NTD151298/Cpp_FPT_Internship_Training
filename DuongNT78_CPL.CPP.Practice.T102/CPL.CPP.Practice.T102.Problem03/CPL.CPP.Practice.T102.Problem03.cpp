
#include <iostream>
#include <cmath>
#include <string>

using namespace std;


bool friendNumber(int a, int b) {
    int A, B;
    int c1 = 0, c2 = 0;
    if (a == 1 && b == 1) { // Ihere will be no proper divisor
        cout << "True";
        return 0;
    }
    // find all divisors which divides 'a'
    for (int i = 2; i <= sqrt(a); i++)
    {
        // if 'i' is divisor of 'a'
        if (a % i == 0)
        {
            // if both divisors are same then add
            // it only once else add both
            if (i == (a / i))
                c1 += i;
            else
                c1 += (i + a / i);
        }
    }
    // Add 1 to the result A as 1 is also a divisor
    A = c1 + 1;   
    
    // find all divisors which divides 'b'
    for (int i = 2; i <= sqrt(b); i++)
    {
        // if 'i' is divisor of 'b'
        if (b % i == 0)
        {
            // if both divisors are same then add
            // it only once else add both
            if (i == (b / i))
                c2 += i;
            else
                c2 += (i + b / i);
        }
    }
    // Add 1 to the result B as 1 is also a divisor
    B = c2 + 1;
    // check if A == b and B == a is true
    if (A == b && B == a) {
        cout << "True";
    }
    else cout << "False";
}


int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    friendNumber(a, b);
    return 0;
}