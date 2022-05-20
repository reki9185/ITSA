#include <iostream>

using namespace std;

int main(){
    int num;
    int a[1024];
    int count=0;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    for(int i=1;i<num-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]) count++;
    }
    cout<<count<<endl;
    cout<<a[0]<<endl;
    for(int i=1;i<num-1;i++){
       if(a[i]>a[i-1] && a[i]>a[i+1]) cout<<a[i]<<">>>>>"<<endl;
       else cout<<a[i]<<endl;
    }
    cout<<a[num-1]<<endl;
    return 0;
}