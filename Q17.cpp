
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int mostPopularItem(vector<int> &sales)
{
    unordered_map<int, int> freq;

    // Count frequency of each element
    for (int i = 0; i < sales.size(); i++)
    {
        freq[sales[i]]++;
    }

    int ans = sales[0];
    int maxFreq = 0;

    // Find the element with highest frequency
    for (auto it : freq)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            ans = it.first;
        }
        else if (it.second == maxFreq && it.first < ans)
        {
            ans = it.first;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> sales(n);

    for (int i = 0; i < n; i++)
    {
        cin >> sales[i];
    }

    cout << mostPopularItem(sales);

    return 0;
}
