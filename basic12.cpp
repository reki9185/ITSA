#include <iostream>

using namespace std;

int f(int k){
    if(k==0||k==1) return k+1;
    return f(k-1)+f(k/2);
}

int main(){
    int k;
    cin>>k;
    cout<<f(k)<<endl;
    return 0;
}