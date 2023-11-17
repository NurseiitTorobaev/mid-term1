
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

