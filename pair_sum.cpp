#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> pairsum(vector<int> vect, int sum)
{
    unordered_set<int> s;
    vector<int> result;
    for (int i = 0; i < vect.size(); i++)
    {
        int x = sum - vect[i];
        if (s.find(x) != s.end())
        {
            result.push_back(x);
            result.push_back(vect[i]);
            return result;
        }
        s.insert(vect[i]);
    }

    return {};
}

int main()
{
    vector<int> vec{4, 5, 2, 3, -6, 0, 1};
    int s = 5;
    auto p = pairsum(vec, s);
    if (p.size() == 0)
    {
        cout << "no  such pairs exists" << endl;
    }
    else
    {
        cout << p[0] << " , " << p[1] << endl;
    }
    return 0;
}