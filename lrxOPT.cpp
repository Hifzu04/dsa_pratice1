#include <bits/stdc++.h>
using namespace std;
int arr[100], aux[100], l, r, x, Noquery, fina;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> Noquery;
    for (int i = 0; i < Noquery; i++)
    {
        cin >> l >> r >> x;
        aux[l] += x;
        aux[r + 1] -= x;
    }
    for (int i = 0; i < n; i++)
    {
        fina += aux[i];
        arr[i] += fina;
        cout << arr[i] << " ";
    }
}