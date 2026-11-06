
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int minimumAbsoluteValue(vector<int> arr)
{
    int minValue = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (abs(arr[i]) < abs(minValue))
        {
            minValue = arr[i];
        }
    }

    return minValue;
}

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Minimum absolute value element: ";
    cout << minimumAbsoluteValue(arr);

    return 0;
}
