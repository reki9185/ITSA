#include <stdio.h>

int main(){
    int a[100];
    int num;
    int cnt=0;
    while(scanf("%d",&num)!=EOF){
        a[cnt]=num;
        cnt++;
    }
    printf("%d",a[cnt-1]);
    for(int i=cnt-2;i>=0;i--){
        printf(" %d",a[i]);
    }
    printf("\n");
    return 0;
}