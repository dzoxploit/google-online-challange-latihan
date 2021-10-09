/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
signed xoroperator()
{
    std::vector<int>v ;
    int effect=0;
    int q;
    cin >> q;
    v.push_back(0);
    while(q--){
        int type,x;
        cin >> type >> x;
        if(type == 0){
            v.push_back(x);
            v.back()^=effect;
        }else{
            effect^=x;
        }
    }
    for(int i=0; i < v.size(); i++){
        v[i]^=effect;
    }
    sort(v.begin(), v.end());
     for(int i=0;i<v.size();i++)
        cout<<v[i]<<' ';
}