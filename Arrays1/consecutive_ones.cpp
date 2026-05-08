#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        v.emplace_back(a);
    }
    int c=0,maxi=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1){
            c++;
            if(c>maxi)
            {
                maxi=c;
            }
        }
        else{
            c=0;
        }
    }
    cout << maxi;

}
