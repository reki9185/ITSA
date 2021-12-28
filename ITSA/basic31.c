#include <stdio.h>
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
    char word[1024];
    char*lines[12];
    char*ptr;
    int cnt;
    int num[12];
    int c;
    int flag=0;
    while(fgets(line,1024,stdin)!=NULL){
        for(int i=0;i<12;i++){
            num[i]=0;
        }
        cnt=0;
        c=0;
        ptr=line;
        while((ptr=getword(ptr,word))){
            flag=0;
            c++;
            for(int i=0;i<cnt;i++){
                if(strcmp(word,lines[i])==0){
                    flag=1;
                    num[i]++;
                    break;
                }
            }
            if(flag==0){
                lines[cnt]=strdup(word);
                num[cnt]=1;
                cnt++;
            }
        }
        flag=0;
        for(int i=0;i<cnt;i++){
            if(num[i]>c/2){
                printf("%s\n",lines[i]);
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("NO\n");
        }
    }
    return 0;
}