#include <iostream>
using namespace std;

bool countDigits(int n)
{
    if (n == 0)
        return 1;

    n = abs(n);
    int count = 0;

    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    if (count % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    cout << countDigits(n);

    return 0;
}
