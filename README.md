//#include <iostream>
using namespace std;

int main()
{
    int A, B, N;
    cin >> A >> B >> N;
    A = A * N + (B * N) / 100;
    B = (B * N) % 100;
    
    cout << A << " som " << B << " tyiyn\n";
    return 0;
}
//
//
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
//
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int o = 0, e = 0, n, N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            e++;
        }
    }
    cout << "Odds: " << N - e <<" \n";
    cout << "Even: " << e;
    return 0;
}
//
//
#include <iostream>

using namespace std;

int isPrime(int N)
{
    int c = 1;
    while (c!=0)
    {
        for (int i = 2; i <= N / 2; i++)
        {
            if (N % i == 0)
            {
                c++;
            }
        }
        if (c > 1)
        {
            N++;
            c = 1;
        }
        else
        {
            c = 0;
        }
    }
    return N;
}
int main()
{
    int N;
    cin >> N;
    N++;
    cout << isPrime(N);
}
//