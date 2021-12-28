#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int num;
    int t;
    char tmp[10];
    char line[120];
    char*ptr;
    fgets(line,120,stdin);
    fgets(tmp,10,stdin);
    num=atoi(tmp);
    num=num%26;
    ptr=line;
    while(*ptr){
        if(isupper(*ptr)){
            t='A'+(*ptr-'A')+num;
            if(t-'Z'>0){
                t='A'+(t-'Z'-1);
            }
            printf("%c",t);
        }else if(islower(*ptr)){
            t='a'+(*ptr-'a')+num;
            if(t-'z'>0){
                t='a'+(t-'z'-1);
            }
            printf("%c",t);
        }else if(isdigit(*ptr)){
            t='0'+(*ptr-'0')+num;
            if(t-'9'>0){
                t='0'+(t-'9'-1);
            }
            printf("%c",t);
        }else{
            printf("%c",*ptr);
        }
        ptr++;
    }
    return 0;
}