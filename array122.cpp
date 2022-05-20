#include <iostream>

using namespace std;

int main(){
    int n,m;
    int sx,sy,ex,ey;
    int total;
    int a[1024][1024];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        cin>>sx>>sy>>ex>>ey;
        total=0;
        for(int j=sx-1;j<ex;j++){
            for(int k=sy-1;k<ey;k++){
                total+=a[j][k];
            }
        }
        cout<<total<<endl;
    }
    return 0;
}