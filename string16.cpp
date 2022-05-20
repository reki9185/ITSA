#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;
    cout<<str[0];
    for(int i=1;i<str.size();i++){
        cout<<"   "<<str[i];
    }
    cout<<endl;
    return 0;
}