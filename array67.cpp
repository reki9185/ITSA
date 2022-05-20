#include <iostream>
#include<iomanip>

using namespace std;

int main(){
    int number[6];
    for(int i=0;i<6;i++){
        cin>>number[i];
    }
    for(int i=0;i<6;i++){
        cout<<setw(3)<<setfill('0')<<number[i]*number[0];
        for(int j=1;j<6;j++){
            cout<<" ";
            cout<<setw(3)<<setfill('0')<<number[i]*number[j];
        }
        cout<<endl;
    }
    return 0;
}