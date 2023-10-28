#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int first = 1;
    int second = 2;
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        vec[i] = first;
        int next = first + second;
        first = second;
        second = next;
    }
    cout<<vec[n-2]+vec[n-3];
    cout<<endl;
}