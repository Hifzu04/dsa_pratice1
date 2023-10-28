#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int k;
    cin >> k;
    vector<int> vec{-2, 0, 1, 2, 3, 5, 6, 8};
    sort(vec.begin(), vec.end());
    int start = 0;
    int end = vec.size() - 1;
    while (start < end)
    {
        if (vec.at(start) + vec.at(end) == k)
        {
            cout << vec.at(start) << " , " << vec.at(end) << endl;
            start++;
            end--;
        }
        else if (vec.at(start) + vec.at(end) < k)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
}
