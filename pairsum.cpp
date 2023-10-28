#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int arr[8] = {2, 1, 8, 6, -2, 5, 3, 0};
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << arr[i] << " " << arr[j]<<endl;
            }
            
        }
    }
}
