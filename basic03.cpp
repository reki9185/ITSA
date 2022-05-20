#include <iostream>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if((x<200 && x>-200)&&(y<200 && y>-200)){
        cout<<"inside"<<endl;
    }else{
        cout<<"outside"<<endl;
    }
    return 0;
}