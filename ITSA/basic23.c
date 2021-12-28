#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char*getword(char*line,char*word){
    char*ptr=line;
    char*qtr=word;
    while(*ptr&&!isdigit(*ptr)){
        ptr++;
    }
    while(*ptr&&isdigit(*ptr)){
        *qtr++=*ptr++;
    }
    *qtr='\0';
    if(qtr-word==0){
        return NULL;
    }
    return ptr;
}

int main(){
    int a[4];
    int cnt=0;
    int d,e,f;
    char line[1024];
    char word[1024];
    char*ptr;
    fgets(line,1024,stdin);
    ptr=line;
    while((ptr=getword(ptr,word))){
        a[cnt]=atoi(word);
        cnt++;
    }
    if(a[0]<a[1]*15+a[2]*20+a[3]*30){
        printf("0\n");
    }else{
        a[0]-=a[1]*15+a[2]*20+a[3]*30;
        f=a[0]/50;
        a[0]=a[0]%50;
        e=a[0]/5;
        a[0]=a[0]%5;
        d=a[0];
        printf("%d,%d,%d\n",d,e,f);
    }
    return 0;
}