#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int k, int size, int ok)
{
    int l = 0;
    int r = size, result = -1;

    while (l < r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == k)
        {
            result = mid;
            if (ok ==1)r = mid - 1;
            if(ok==2) l= mid+1;
        }
        else if (k > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return result;
}
// int main()
//  {
//      int arr[] = {0, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 4, 5, 6, 6, 6, 6,6,6,6};

//     int cnt = 1;
//     int answer=0;

//     for (int i = 1; i < 20; i++)
//     {
//         if (arr[i] == arr[i-1])
//         {
//             cnt++;

//         }
//         else
//         {
//             cnt = 1;
//         }
//         answer = max(cnt, answer);
//     }
//     cout<<answer<<endl;
// }
// O(n) is the time complexity
int main()
{
    int size;
    cin >> size;
    int arr[] = {0, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6};
    int key;
    cin >> key;
    int p;
    int f = BinarySearch(arr, key, size, 1);
    int l = BinarySearch(arr, key, size, 2);
    cout <<"answer is "<<l-f+1<<endl;
}
