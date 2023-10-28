#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int total_sum = 18;
    for (int i = 0; i < vec.size(); i++)
    {
        int j = i + 1;
        int k = vec.size() - 1;
        while (k > j)
        {
            int current_sum = vec[i];
            current_sum += vec[j];
            current_sum += vec[k];

            if (total_sum == current_sum)
            {
                cout << vec[i] << " " << vec[j] << " " << vec[k] << endl;
                k--;
                j++;
            }
            else if(total_sum > current_sum)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
}