#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char*getword(char*line,char*word){
    char*ptr=line;
    char*qtr=word;
    while(isspace(*ptr)&&*ptr){
        ptr++;
    }
    while(!isspace(*ptr)&&*ptr){
        *qtr++=*ptr++;
    }
    *qtr='\0';
    if(qtr-word==0){
        return NULL;
    }
    return ptr;
}

int main(){
    char line[100];
    char word[100];
    char*ptr;
    int a[11];
    int len;
    int cnt=0;
    fgets(line,120,stdin);
    len=strlen(line);
    if(line[len-1]=='\n'){
        line[len-1]='\0';
    }
    ptr=line;
    while((ptr=getword(ptr,word))){
        if(strcmp(word,"X")==0){
            a[cnt]=10;
            cnt++;
        }else{
            a[cnt]=atoi(word);
            cnt++;
        }
    }
    for(int i=1;i<10;i++){
        a[i]+=a[i-1];
    }
    for(int i=1;i<10;i++){
        a[i]+=a[i-1];
    }
    if(a[9]%11==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}