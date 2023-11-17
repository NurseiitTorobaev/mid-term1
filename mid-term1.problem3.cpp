

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

