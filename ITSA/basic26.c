#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int num;
    int len;
    int tmp;
    char*ptr;
    char line[10];
    char*lines[1024];
    int a[1024];
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%s",line);
        lines[i]=strdup(line);
    }
    for(int i=0;i<num;i++){
        a[i]=0;
    }
    for(int i=0;i<num;i++){
        len=strlen(lines[i]);
        for(int j=0;j<len;j++){
            a[i]+=(lines[i][j]-'0');
        }
    }
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-i-1;j++){
            if(a[j]>a[j+1]){
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                ptr=lines[j];
                lines[j]=lines[j+1];
                lines[j+1]=ptr;
            }else if(a[j]==a[j+1]){
                if(atoi(lines[j])>atoi(lines[j+1])){
                    ptr=lines[j];
                    lines[j]=lines[j+1];
                    lines[j+1]=ptr;
                }
            }
        }
    }
    printf("%s",lines[0]);
    for(int i=1;i<num;i++){
        printf(" %s",lines[i]);
    }
    printf("\n");
    return 0;
}