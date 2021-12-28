#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int num;
    int sum;
    char line[1024];
    char*ptr;
    int len;
    fgets(line,1024,stdin);
    num=atoi(line);
    for(int i=0;i<num;i++){
        sum=0;
        fgets(line,1024,stdin);
        len=strlen(line);
        if(line[len-1]=='\n'){
            line[len-1]='\0';
        }
        ptr=line;
        while(*ptr){
            sum+=*ptr;
            ptr++;
        }
        printf("%d\n",sum);
    }
    return 0;
}