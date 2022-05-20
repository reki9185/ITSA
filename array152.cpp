#include <iostream>

using namespace std;

int main(){
    int n,a;
    int c;
    int number[1024];
    cin>>n>>a;
    for(int i=0;i<1024;i++) number[i]=0;
    for(int i=0;i<n;i++){
        cin>>c;
        number[c]++;
    }
    for(int i=0;i<1024;i++){
        if(number[i]>=a) cout<<i<<","<<number[i]<<endl;
    }
    return 0;
}