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
    char word[120];
    char*ptr;
    int cnt=0;
    int a[1024];
    int sum;
    while(fgets(line,1024,stdin)!=NULL){
        ptr=line;
        cnt=0;
        sum=0;
        while((ptr=getword(ptr,word))){
            a[cnt]=atoi(word);
            cnt++;
        }
        for(int i=0;i<cnt;i++){
            sum+=a[i];
        }
        printf("Size: %d\n",cnt);
        printf("Average: %.3f\n",(double)sum/cnt);
    }
    return 0;
}