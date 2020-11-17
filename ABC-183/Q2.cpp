#include<iostream>
#include<algorithm>
using namespace std;
 // namespace std;

int main(){
    int64_t x1,x2,y1,y2;
    double x;
    cin>>x1>>y1>>x2>>y2;
    if(y2==(-y1)){
        printf("%.7f",-1);
    }
    x = double (x2*y1+x1*y2)/(y2+y1);
    printf("%.7f\n",x);
}