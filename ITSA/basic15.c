#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char*getword(char*line,char*word){
    char*ptr=line;
    char*qtr=word;
    while(*ptr&&isspace(*ptr)){
        ptr++;
    }
    while(*ptr&&!isspace(*ptr)){
        *qtr++=*ptr++;
    }
    *qtr='\0';
    if(qtr-word==0){
        return NULL;
    }
    return ptr;
}

int main(){
    char line[120];
    char word[120];
    char a[30];
    char*ptr;
    int len;
    int cnt=0;
    fgets(line,120,stdin);
    len=strlen(line);
    if(line[len-1]=='\n'){
        line[len-1]='\0';
    }
    for(int i=0;i<30;i++){
        a[i]=0;
    }
    ptr=line;
    while((ptr=getword(ptr,word))){
        len=strlen(word);
        cnt++;
        for(int i=0;i<len;i++){
            if(isupper(word[i])){
                word[i]=tolower(word[i]);
            }
            a[(word[i]-'a')]++;
        }
    }
    printf("%d\n",cnt);
    for(int i=0;i<30;i++){
        if(a[i]!=0){
            printf("%c : %d\n",'a'+i,a[i]);
        }
    }
    return 0;
}