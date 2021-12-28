#include <stdio.h>
#include <string.h>

int main(){
    char line[1024];
    scanf("%s",line);
    int len=strlen(line);
    int i;
    for(i=0;i<len/2;i++){
        if(line[i]!=line[len-1-i]){
            break;
        }
    }
    if(i>=len/2){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}