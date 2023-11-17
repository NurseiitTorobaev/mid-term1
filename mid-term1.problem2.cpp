
#include <iostream>
using namespace std;
int main()
{
    int N, n1, n2, n3, n4, n5, n6;
    cin >> N;
    n1 = N / 100000;
    N = N % 100000;
    n2 = N / 10000;
    N = N % 10000;
    n3 = N / 1000;
    N = N % 1000;
    n4 = N / 100;
    N = N % 100;
    n5 = N / 10;
    n6 = N % 10;
    n1 = n1 + n2 + n3;
    n4 = n4 + n5 + n6;
    if (n1 == n4)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}

