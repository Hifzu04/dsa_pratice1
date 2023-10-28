#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int count = 1;
    int maxm = 0;
    vector<int> vec = {1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};
    sort(vec.begin(), vec.end());
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i + 1] - vec[i] == 1)
        {
            count++;
        }
        else
        {
            count = 1;
        }
        maxm = max(maxm, count);
    }

    cout << maxm << endl;
}