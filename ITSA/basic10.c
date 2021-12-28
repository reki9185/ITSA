#include <stdio.h>

int main(){
    int a,b;
    int tmp;
    scanf("%d%d",&a,&b);
    if(b>a){
        tmp=a;
        a=b;
        b=tmp;
    }
    tmp=1;
    while(tmp!=0){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    printf("%d\n",a);
    return 0;
}