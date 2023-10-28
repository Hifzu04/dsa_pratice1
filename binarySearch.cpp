#include <bits/stdc++.h>
#include <iostream>t
using namespace std;
// binary search T.C O()

int binarySearch(int target, vector<int> vect)
{

}

int main()
{

    vector<int> vec;
    for (int i = 0; i < 5; i++)
    {
        int p;
        cin >> p;
        vec.push_back(p);
    }
    int Noq, Query;
    cin >> Noq;

   

    for (int i = 0; i < Noq; i++)
    {
        cin >> Query;
        int position = bianrySearch(query, vec);
        cout << position << " ";
    }
