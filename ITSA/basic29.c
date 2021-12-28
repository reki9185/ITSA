#include <stdio.h>
#include <string.h>

int main(){
    char line[10];
    int len;
    int a[10];
    int p;
    scanf("%s",line);
    len=strlen(line);
    if(line[0]<'I'){
        a[0]=10+(line[0]-'A');
    }else if(line[0]=='I'){
        a[0]=34;
    }else if(line[0]>'I'&&line[0]<'O'){
        a[0]=18+(line[0]-'J');
    }else if(line[0]=='O'){
        a[0]=35;
    }else if(line[0]>'O'&&line[0]<'W'){
        a[0]=23+(line[0]-'P');
    }else if(line[0]=='X'){
        a[0]=30;
    }else if(line[0]=='Y'){
        a[0]=31;
    }else if(line[0]=='W'){
        a[0]=32;
    }else if(line[0]=='Z'){
        a[0]=33;
    }
    for(int i=1;i<len;i++){
        a[i]=line[i]-'0';
    }
    p=(a[0]/10)+9*(a[0]%10)+8*a[1]+7*a[2]+6*a[3]+5*a[4]+4*a[5]+3*a[6]+2*a[7]+a[8]+a[9];
    if(p%10==0){
        printf("CORRECT!!!\n");
    }else{
        printf("WRONG!!!\n");
    }
    return 0;
}