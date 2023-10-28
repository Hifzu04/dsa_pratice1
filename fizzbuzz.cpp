#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> fizzbuzz(int n)
{
    vector<string> result;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            result.push_back("fizzbuzz");
        }
        else if (i % 5 == 0)
        {
            result.push_back("fizz");
        }
        else if (i % 3 == 0)
        {
            result.push_back("buzz");
        }
        else
        {
            result.push_back(to_string(i));
        }
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<string> res = fizzbuzz(n);
    for (const string &str : res)
    {
        cout << str << " ";
    }
}