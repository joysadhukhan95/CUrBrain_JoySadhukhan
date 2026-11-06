#include <iostream>

using namespace std;

long long getModuloPower(long long base, int power, long long MOD)
{
    long long result = 1 % MOD;

    for (int i = 0; i < power; i++)
    {
        result = (result * base) % MOD;
    }

    return result;
}

int main()
{
    // Test Case 1
    long long base = 2;
    int power = 10;
    long long MOD = 1000;

    cout << "Modulo Power: " << getModuloPower(base, power, MOD) << endl;

    return 0;
}