#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(int a,int b){
    return a<b;
}

int main(){
    string str;
    int a,b;
    int tmp[3];
    int c=0;
    cin>>str;
    cin>>a>>b;
    for(int i=0;i<5;i++){
        if(i+1!=a && i+1!=b) tmp[c++]=str[i]-'0';
    }
    sort(tmp,tmp+3,cmp);
    for(int i=0;i<3;i++) cout<<tmp[i];
    cout<<endl;
    return 0;
}