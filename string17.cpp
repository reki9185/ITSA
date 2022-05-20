#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;
    int i;
    for(i=0;i<=str.size()/2;i++){
        if(str[i]!=str[str.size()-1-i]){
            break;
        }
    }
    if(i>=str.size()/2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}