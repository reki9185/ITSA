#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    string table[12];
    cin>>num;
    table[4]="rat"; 
    table[5]="ox";
    table[6]="tiger";
    table[7]="rabbit";
    table[8]="dragon";
    table[9]="snake";
    table[10]="horse";
    table[11]="goat";
    table[0]="monkey";
    table[1]="rooster";
    table[2]="dog";
    table[3]="pig";
    cout<<table[(num%12)]<<endl;
    if(num%12>=6) cout<<table[(num%12-6)]<<endl;
    else cout<<table[(num%12+6)]<<endl; 
    return 0;
}