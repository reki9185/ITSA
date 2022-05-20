#include <iostream>

using namespace std;

int main(){
    int a[100][100];
    int b[100][100];
    int ax,ay,bx,by;
    cin>>ax>>ay;
    for(int i=0;i<ax;i++){
        for(int j=0;j<ay;j++){
            cin>>a[i][j];
        }
    }
    cin>>bx>>by;
    for(int i=0;i<bx;i++){
        for(int j=0;j<by;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<ax;i++){
        cout<<a[i][0]+b[i][0];
        for(int j=1;j<ay;j++){
            cout<<" "<<a[i][j]+b[i][j];
        }
        cout<<endl;
    }
    return 0;
}