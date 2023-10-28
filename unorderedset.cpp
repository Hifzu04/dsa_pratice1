#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s{1, 12, 12, 16, 19, 13, 11};
    int key;
    cin >> key;
    if (s.find(key) != s.end())
    {
        cout << "the value is found";
    }
    else
    {
        cout << "the value not  found";
    }
}