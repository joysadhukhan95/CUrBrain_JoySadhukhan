
#include <iostream>
#include <vector>
using namespace std;

vector<int> thresholdFilter(vector<int> sales, int threshold)
{
    vector<int> result;

    for (int i = 0; i < sales.size(); i++)
    {
        if (sales[i] >= threshold)
        {
            result.push_back(sales[i]);
        }
    }

    return result;
}

int main()
{
    int n, threshold;

    cout << "Enter number of sales: ";
    cin >> n;

    vector<int> sales(n);

    cout << "Enter sales values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> sales[i];
    }

    cout << "Enter threshold: ";
    cin >> threshold;

    vector<int> result = thresholdFilter(sales, threshold);

    cout << "Filtered sales: ";
    cout << "[";

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];

        if (i != result.size() - 1)
            cout << ", ";
    }

    cout << "]";

    return 0;
}
