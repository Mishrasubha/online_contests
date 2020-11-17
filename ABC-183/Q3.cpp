#include<iostream>
#include<algorithm>
#include<vector>
#define all(x) x.begin(),x.end()
using ll = long long;
using namespace std;
int main(){
    int k,n;
    vector<int> perm;
    int t[10][10];
    cin>>n>>k;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
        cin>>t[i][j];
        }
    }
    for(int i=2;i<n+1;i++){
        perm.push_back(i);

    }

    
    int ans = 0;
	
	do{
		int cur = 1;
		int c = 0;
		for(int x:perm){
			c += t[cur][x];
			cur = x;
		}
		c += t[perm.back()][1];
		
		if(c == k) {ans++;}
		
	}while(next_permutation(perm.begin(),perm.end()));
	
	cout << ans<<endl;

}