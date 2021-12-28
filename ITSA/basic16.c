#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[128];
    char line[512];
    char*ptr;
    int cnt=0;
    int len;
    scanf("%s",str);
    scanf("%s",line);
    ptr=line;
    len=strlen(str);
    while(*ptr){
        if(strncmp(ptr,str,len)==0){
            cnt++;
        }
        ptr++;
    }
    printf("%d\n",cnt);
    return 0;
}