#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
using ll = long long;
int main(){
    string s;
    int l,r;
    int t;
    int n,q;
    cin>>t;
    while(t--){
        cin>>n>>q;
        cin>>s;
        while(q--){
            cin>>l>>r;
            --l;
            --r;
            bool p=0;
            for(ll i=0;i<l;i++){
                if(s[i]==s[l]) p=1;
            }
            for(ll i=r+1;i<n;i++){
                if(s[i]==s[r]) p=1;
            }
            cout<<(p?"Yes":"No")<<"\n";
        }
    }

}