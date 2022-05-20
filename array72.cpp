#include <iostream>

using namespace std;

int main(){
    int num;
    int a,b;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>a>>b;
        cout<<a*250+b*175<<endl;
    }
    return 0;
}