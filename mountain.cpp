#include <iostream>
#include <vector>
using namespace std;
int answer(vector<int>vec){
    int maxm = 0;
    for (int i = 1; i < vec.size() - 1; i++)
    {
        if (vec[i] > vec[i - 1] && vec[i] > vec[i + 1])
        {
            
            int count = 1;
            int j = i;

            while (vec[j] > vec[j - 1] && j > 0)
            {
                count++;
                j--;
            }

            while (vec[i] > vec[i + 1] && i < vec.size()-1)
            {
                count++;
                i++;
            }
            maxm = max(count, maxm);
        }
        
        
    }

    return maxm;
}

int main()
{

    vector<int> vec = {5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};
    cout << "the size of vector is " << vec.size() << endl;
    cout<<answer(vec);
    
}