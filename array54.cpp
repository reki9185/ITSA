#include <iostream>

using namespace std;

int main(){
    int n;
    int table[26];
    char c;
    cin>>n;
    for(int i=0;i<26;i++){
        table[i]=0;
    }
    for(int i=0;i<n;i++){
        cin>>c;
        table[(c-'a')]++;
    }
    for(int i=0;i<26;i++){
        if(table[i]!=0) cout<<char('a'+i)<<" "<<table[i]<<endl;
    }
    return 0;
}