#include <iostream>
using namespace std;

int main()
{
    int n, digit, result = 0, place = 1;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0)
    {
        digit = n % 10;

        if (digit % 2 == 0)
            digit = 0;

        result = result + digit * place;

        place = place * 10;
        n = n / 10;
    }

    cout << "Converted number = " << result;

    return 0;
}
