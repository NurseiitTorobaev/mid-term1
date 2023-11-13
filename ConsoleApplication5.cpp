#include <iostream>
using namespace std;

int main()
{
    int A, B, N;
    cin >> A >> B >> N; //A are soms, B are tyiyns//
    A = A * N + (B * N) / 100;
    B = (B * N) % 100;
    
    cout << A << " som " << B << " tyiyn\n";
    return 0;
}
