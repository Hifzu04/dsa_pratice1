#include<bits/stdc++.h>
using namespace std;
int main(){
    int l, r,x,n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>l>>r>>x;
    while(l<=r){
        arr[l]+=x;
        l++;

    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}