#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int number[17];
    int total=0;
    cin>>str;
    if(str.size()!=16) cout<<"Error"<<endl;
    else{
        for(int i=1;i<=16;i++){
            number[i]=str[i-1]-'0';
        }
        for(int i=1;i<=16;i++){
            if(i%2==0) number[i]*=2;
            number[i]=number[i]/10+number[i]%10;
        }
        for(int i=1;i<=16;i++){
            total+=number[i];
        }
        if(total%10==0) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}