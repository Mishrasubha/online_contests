#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<array>
#include<ctype.h>
using namespace std;
using ll = long long;
int32_t main(){
    int t,n,k;
    cin>>t;

    while(t--){
        cin>>n>>k;
        string a;
        string b;
        cin>>a>>b;
        array<int,27> have{},need{};
        for(auto& c:a){
            have[c-'a']++;
        }
        for(auto& c:b){
            need[c-'a']++;
        }
        bool  p=0;
for(int i=0;i<26;i++){
    if(have[i]<need[i]||(have[i]-=need[i])%k)
    p = 1;
    have[i+1] += have[i]; 
}
cout<<(p?"No":"Yes")<<'\n';
    }
}