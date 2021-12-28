#include <stdio.h>
#include <string.h>

int main(){
    char a[4];
    char b[4];
    int A=0,B=0;
    scanf("%s",a);
    while(scanf("%s",b)!=EOF){
        A=0;
        B=0;
        if(strcmp(b,"0000")==0){
            break;
        }
        for(int i=0;i<4;i++){
            if(b[i]==a[i]){
                A++;
            }else{
                for(int j=0;j<4;j++){
                    if(i!=j){
                        if(b[i]==a[j]){
                            B++;
                        }
                    }
                }
            }
        }
        printf("%dA%dB\n",A,B);
    }
    return 0;
}