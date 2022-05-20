#include <iostream>

using namespace std;

int main(){
    int n,m;
    int bx,by;
    int total;
    int a[1024];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>bx>>by;
        total=0;
        for(int j=bx-1;j<by;j++){
            total+=a[j];
        }
        cout<<total<<endl;
    }
    return 0;
}