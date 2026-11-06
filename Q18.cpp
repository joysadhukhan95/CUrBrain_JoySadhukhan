
#include <iostream>
#include <vector>
using namespace std;

void reverseSubSegment(vector<int> &arr, int start, int end)
{
    // Reverse using two pointers
    while (start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start, end;
    cin >> start >> end;

    reverseSubSegment(arr, start, end);

    // Display the modified array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
