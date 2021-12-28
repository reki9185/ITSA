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
    char line[1024];
    char*ptr;
    char*lines[1024];
    char word[1024];
    int len;
    int cnt=0;
    int flag=0;
    fgets(line,1024,stdin);
    len=strlen(line);
    if(line[len-1]=='\n'){
        line[len-1]='\0';
    }
    ptr=line;
    while((ptr=getword(ptr,word))){
        flag=0;
        len=strlen(word);
        for(int i=0;i<len;i++){
            word[i]=tolower(word[i]);
        }
        for(int i=0;i<cnt;i++){
            if(strcmp(word,lines[i])==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            lines[cnt]=strdup(word);
            cnt++;
        }
    }
    printf("%s",lines[0]);
    for(int i=1;i<cnt;i++){
        printf(" %s",lines[i]);
    }
    printf("\n");
    return 0;
}