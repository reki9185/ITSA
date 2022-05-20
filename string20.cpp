#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    int count_a[26];
    int count_b[26];
    int flag;
    string a,b;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>a>>b;
        flag=0;
        for(int j=0;j<26;j++){
            count_a[j]=0;
            count_b[j]=0;
        }
        for(int j=0;j<a.size();j++){
            count_a[(a[j]-'a')]++;
        }
        for(int j=0;j<b.size();j++){
            count_b[(b[j]-'a')]++;
        }
        for(int j=0;j<26;j++){
            if(count_a[j]!=count_b[j]){
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}