#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b&&b==c&&c==d){
        cout<<"WIN"<<endl;
    }else if(a==b){
        if(a==c||a==d){
            cout<<"R"<<endl;
        }else if(c==d){
            if(a>c){
                cout<<a*2<<endl;
            }else{
                cout<<c*2<<endl;
            }
        }else{
            cout<<c+d<<endl;
        }
    }else if(b==c){
        if(b==a||b==d){
            cout<<"R"<<endl;
        }else if(a==d){
            if(b>a){
                cout<<b*2<<endl;
            }else{
                cout<<a*2<<endl;
            }
        }else{
            cout<<a+d<<endl;
        }
    }else if(a==c){
        if(a==b||a==d){
            cout<<"R"<<endl;
        }else if(b==d){
            if(a>b){
                cout<<a*2<<endl;;
            }else{
                cout<<b*2<<endl;
            }
        }else{
            cout<<b+d<<endl;
        }
    }else if(b==d){
        if(b==a||b==c){
            cout<<"R"<<endl;
        }else if(a==c){
            if(b>a){
                cout<<b*2<<endl;
            }else{
                cout<<a*2<<endl;
            }
        }else{
            cout<<a+c<<endl;
        }
    }else if(a==d){
        if(a==c||a==b){
            cout<<"R"<<endl;
        }else if(b==c){
            if(a>b){
                cout<<a*2<<endl;
            }else{
                cout<<b*2<<endl;
            }
        }else{
            cout<<b+c<<endl;
        }
    }else{
        cout<<"R"<<endl;
    }
    return 0;
}