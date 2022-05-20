#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string str;
    int total=0;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(islower(str[i]))  total+=str[i]-'a'+1;
        else total+=str[i]-'A'+1;
    }
    cout<<total<<endl;
    return 0;
}