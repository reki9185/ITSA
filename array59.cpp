#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    string str;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>str;
        if(str.size()!=4) cout<<"Failure Input"<<endl;
        else{
            if(str[0]==str[1] && str[0]!=str[2] && str[0]!=str[3] && str[2]!=str[3]) cout<<"Yes"<<endl;
            else if(str[0]==str[2] && str[0]!=str[1] && str[0]!=str[3] && str[1]!=str[3]) cout<<"Yes"<<endl;
            else if(str[0]==str[3] && str[0]!=str[1] && str[0]!=str[2] && str[1]!=str[2]) cout<<"Yes"<<endl;
            else if(str[1]==str[2] && str[1]!=str[0] && str[1]!=str[3] && str[0]!=str[3]) cout<<"Yes"<<endl;
            else if(str[1]==str[3] && str[1]!=str[0] && str[1]!=str[2] && str[0]!=str[2]) cout<<"Yes"<<endl;
            else if(str[2]==str[3] && str[2]!=str[0] && str[2]!=str[1] && str[0]!=str[1]) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}