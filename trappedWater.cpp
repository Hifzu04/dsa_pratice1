#include <iostream>
#include <vector>
using namespace std;
int trappedwater(vector<int> height)
{
    int n = height.size();
    if (n <= 2)
    {
        return 0;
    }
    vector<int> left(n, 0), right(n, 0);
    left[0] = height[0];
    right[n - 1] = height[n - 1];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], height[i]);
        right[n - i - 1] = max(right[n - i], height[n - i - 1]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += min(left[i], right[i]) - height[i];
    }
    return sum;
}
int main()
{
    vector<int> water = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trappedwater(water) << endl;
    return 0;
}
