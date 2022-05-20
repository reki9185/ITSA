#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    string str;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>str;
        for(int i=str.size()-1;i>=0;i--){
            cout<<str[i];
        }
        cout<<endl;
        str.clear();
    }
    return 0;
}