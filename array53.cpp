#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a,int b){
    return a<b;
}

int main(){
    int n;
    int a[1024];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}