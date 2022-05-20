#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string str;
    int total=0;
    for(int i=0;i<5;i++){
        cin>>str;
        if(str.size()==1){
            if(str=="A") total+=14;
            else if(str=="J") total+=11;
            else if(str=="Q") total+=12;
            else if(str=="K") total+=13;
            else total+=str[0]-'0';
        }else{
            total+=10;
        }
    }
    cout<<total<<endl;
    return 0;
}