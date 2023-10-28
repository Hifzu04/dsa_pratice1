#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5, 8, 6, 7, 9, 10, 11};
//     vector<int> vec2(vec);

//     sort(vec.begin(), vec.end());

//     int i = 0;
//     int j = vec.size();
//     while (i < j && vec2[i] == vec[i])
//     {
//         i++;
//     }
//     while (j >= 0 && vec2[j] == vec[j])
//     {
//         j--;
//     }
//     if (i == vec.size())
//     {
//         cout << "-1 , -1 ";
//     }
//     cout << i << " " << j << " " << endl;
//
//}
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 8, 6, 7, 9, 10, 11};
    int n = vec.size();
    int i ,j;
    int count =0;
    int count1 = 0;

    for (i = 1; i < n - 1; i++)
    {
        if (vec[i - 1] < vec[i] && vec[i + 1] > vec[i])
        {
            count++;
        }
    }
    for (j = n - 1; j > 0; j--)
    {
        if (vec[j - 1] > vec[j] && vec[j + 1] > vec[j])
        {
            count1++;
        }
    }
    cout << count << " " << vec.size()-count1 << " " << endl;
}
