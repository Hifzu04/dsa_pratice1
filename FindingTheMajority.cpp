#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,1,1,1,1,1,1,1,1,4,2,1,3,2,1,1,1};
    sort(arr,arr+19);
    for(int i=0; i<19; i++){
        cout<<arr[i]<<" ";
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    if(k==arr[(n/2)+1]){
        cout<<"yes the number is majoriy";
    }else{
        cout<<"not majority";
    }
}