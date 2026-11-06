#include <iostream>
#include <vector>

using namespace std;

long long getModularSum(const vector<long long> &arr)
{
    long long MOD = 1000000007;
    long long sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum = (sum + arr[i]) % MOD;
    }

    return sum;
}

int main()
{
    // Test Case 1
    vector<long long> arr = {1000000000, 1000000000, 1000000000};
    cout << "Modular Sum: " << getModularSum(arr) << endl;

    return 0;
}