#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {2, 3, 3, 3, 2, 7, 9, 2, 4, 1, 5};
    int m;
    bool flag = 0;
    cin >> m;
    int s = vec.size();
    int n;
    for (int i = 0; i < s; i++)
    {
        for (int j = i + 1; j < s; j++)
        {
            n = m - vec[i] - vec[j];
            if (flag = binary_search(vec.begin(), vec.end(), n))
            {

                flag = 1;
                break;
                
            }
        }
         if (flag)
        {
            break;  // Exit the outer loop if a match is found
        }


        //         for (int k = j + 1; k < s; k++)
        //         {
        //             if (m == vec[i] + vec[j] + vec[k])
        //             {
        //                 flag = 1;
        //                 break;
        //             }
        //         }
        //     }
        // }
        // if (flag == 1)
        // {
        //     cout << "yes" << endl;
        // }
        // else
        // {
        //     cout << "no";
        // }
    }
    if (flag)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}
