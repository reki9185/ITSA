#include <iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    if(num>=3&&num<=5){
        cout<<"Spring"<<endl;
    }else if(num>=6&&num<=8){
        cout<<"Summer"<<endl;
    }else if(num>=9&&num<=11){
        cout<<"Autumn"<<endl;
    }else{
        cout<<"Winter"<<endl;
    }
    return 0;
}