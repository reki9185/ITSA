#include <iostream>

using namespace std;

int main(){
    int n;
    int a[3][3];
    int flag=0;
    cin>>n;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        if(a[i][0]==n && a[i][1]==n && a[i][2]==n){
            cout<<"All "<<n<<"'s on row "<<i<<endl;
            flag=1;
        }
    }
    for(int i=0;i<3;i++){
        if(a[0][i]==n && a[1][i]==n && a[2][i]==n){
            cout<<"All "<<n<<"'s on column "<<i<<endl;
            flag=1;
        }
    }
    if(a[0][0]==n && a[1][1]==n && a[2][2]==n){
        cout<<"All "<<n<<"'s on diagonal"<<endl;
        flag=1;
    }
    if(a[2][0]==n && a[1][1]==n && a[0][2]==n){
        cout<<"All "<<n<<"'s on subdiagonal"<<endl;
        flag=1;
    }
    if(flag==0){
        cout<<"There is no line with all "<<n<<endl;
    }
    return 0;
}