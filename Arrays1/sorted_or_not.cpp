/*
Check whether the array is sorted or not
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        v.emplace_back(a);
    }
    for(int i=1;i<n;i++)
    {
        if(v[i] < v[i-1]){
            cout << "not sorted";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout << "sorted";
    }
    
}
