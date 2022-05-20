#include <iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=0;j<num-i;j++){
            cout<<' ';
        }
        if(i%2==1){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }else{
            for(int j=i;j>0;j--){
                cout<<j;
            }
            cout<<endl;
        }
    }
    return 0;
}