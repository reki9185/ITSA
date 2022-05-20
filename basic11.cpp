#include <iostream>

using namespace std;

int main(){
    int x,y;
    int arr[100][100];
    cin>>x>>y;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            if(j==0){
                cout<<arr[j][i];
            }else{
                cout<<" "<<arr[j][i];
            }
        }
        cout<<endl;
    }
    return 0;
}