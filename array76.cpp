#include <iostream>

using namespace std;

int main(){
    int num;
    int a,b;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>a>>b;
        if(a==123){
            if(b==456) cout<<"9000"<<endl;
            else cout<<"error"<<endl;
        }else if(a==456){
            if(b==789) cout<<"5000"<<endl;
            else cout<<"error"<<endl;
        }else if(a==789){
            if(b==888) cout<<"6000"<<endl;
            else cout<<"error"<<endl;
        }else if(a==336){
            if(b==558) cout<<"10000"<<endl;
            else cout<<"error"<<endl;
        }else if(a==775){
            if(b==666) cout<<"12000"<<endl;
            else cout<<"error"<<endl;
        }else if(a==566){
            if(b==221) cout<<"7000"<<endl;
            else cout<<"error"<<endl;
        }else{
            cout<<"error"<<endl;
        }
    }
    return 0;
}