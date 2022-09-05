#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        vector<pair<int,int>>v;

        int n;
        cin>>n;
        for(int i = 1;i<n;i++)
        {
            int p,q;
            cin>>p>>q;
            v.push_back({p,q});
        }
        int sum = 0;
        int minas = 0;
        for(auto u:v)
        {
            sum+=u.first;
            minas+=u.second;
        }
        cout<<"Case "<<i<<": "<<(sum-minas)+1<<endl;
    }

}
