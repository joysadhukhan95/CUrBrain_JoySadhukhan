#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool hasDivisiblePrefix(const vector<int> &arr, int k)
{
    if (arr.empty() || k == 0)
    {
        return false;
    }

    int abs_k = abs(k);
    long long running_sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        running_sum += arr[i];

        if (running_sum % abs_k == 0)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    // Test Case 1
    vector<int> arr = {4, 2, 9};
    int k = 3;

    if (hasDivisiblePrefix(arr, k))
    {
        cout << "Divisible Prefix Subarray: True" << endl;
    }
    else
    {
        cout << "Divisible Prefix Subarray: False" << endl;
    }

    return 0;
}