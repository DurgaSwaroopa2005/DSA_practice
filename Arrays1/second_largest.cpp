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
    int largest=v[0];
    int slargest;
    for(int i=1;i<n;i++)
    {
        if(v[i]>largest)
        {
                slargest=largest;
                largest=v[i];
        }
    }
    cout << slargest;
     
    
}

