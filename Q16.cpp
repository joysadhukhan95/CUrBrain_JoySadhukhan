
#include <iostream>
#include <vector>
using namespace std;

int secondHighest(vector<int> scores)
{
    int highest, secondHighest;
    bool firstSet = false;
    bool secondSet = false;

    for (int i = 0; i < scores.size(); i++)
    {
        if (!firstSet || scores[i] > highest)
        {
            if (firstSet)
            {
                secondHighest = highest;
                secondSet = true;
            }

            highest = scores[i];
            firstSet = true;
        }

        else if (scores[i] != highest &&
                 (!secondSet || scores[i] > secondHighest))
        {
            secondHighest = scores[i];
            secondSet = true;
        }
    }

    if (secondSet)
        return secondHighest;

    return -1;
}

int main()
{
    int n;

    cout << "Enter number of scores: ";
    cin >> n;

    vector<int> scores(n);

    cout << "Enter scores: ";
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    cout << "Second highest unique score: ";
    cout << secondHighest(scores);

    return 0;
}
