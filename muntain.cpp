#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int answer;
    int maxm = -1;

    vector<int> vec{5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, 2, 4};
    for (int i = 1; i < vec.size() - 1; i++)
    {
    int count = 1;

        if (vec[i] < vec[i + 1] && vec[i] > vec[i - 1])
        {
            int j= i;
            while (vec[j] > vec[j- 1])
            {
                count++;
                j--;
            }
            maxm = max(maxm, count);
        }
    }
    cout << maxm;
}