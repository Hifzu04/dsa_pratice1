#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int arr[10] = {8, 9, 2, 0, 5, 0, 7, 6, 9, 7};
    sort(arr,arr+10,greater <int>());
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
}