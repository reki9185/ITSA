#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    int i;
    for(i=0;i<=str.size()/2;i++){
        if(str[i]!=str[str.size()-1-i]){
            break;
        }
    }
    if(i>=str.size()/2){
        cout<<str<<" is a palindrome."<<endl;
    }else{
        cout<<str<<" is not a palindrome."<<endl;
    }
    return 0;
}