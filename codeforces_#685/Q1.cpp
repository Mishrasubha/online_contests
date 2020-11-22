#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    long long n,t;
    cin>>t;
    while(t--){
        cin>>n;
        long long s=0;
        if(n==1) s=0;
        else if(n==2) s=1;
        else if(n==3) s=2;
        else{
            if(n%2==0) s=2;
            else s=3;
        }
    
        cout<<s<<endl;
    }
} 