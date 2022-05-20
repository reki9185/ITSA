#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i+=3){
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}