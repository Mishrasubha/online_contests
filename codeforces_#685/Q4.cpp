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
    ll t,d,k;
    cin>>t;

    while(t--){
        cin>>d>>k;
        bool ut=0;
        ll x = 0, y = 0;
        while(true) {
            if(x <= y && (x + k) * (x + k) + y * y <= d * d)
                x += k;
            else if(x > y && (y + k) * (y + k) + x * x <= d * d)
                y += k;
            else
                break;
        }
        if(x == y)
            cout << "Utkarsh" << endl;
        else
            cout << "Ashish" << endl;
    }
}