#include <stdio.h>
#include <string.h>

int main(){
    int num;
    int tmp;
    int i;
    char a[10];
    scanf("%d",&num);
    tmp=num;
    if(num<0){
        num=num*(-1);
    }
    for(i=0;i<8;i++){
        a[i]=num%2;
        num/=2;
    }
    i=0;
    if(tmp<0){
        while(a[7-i]!=1){
            a[7-i]=1;
            i++;
        }
    }
    for(i=7;i>=0;i--){
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}