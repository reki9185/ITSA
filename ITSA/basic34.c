#include <stdio.h>

int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        if(b==1){
            printf("%.1f\n",(a-80)*0.7);
        }else{
            printf("%.1f\n",(a-70)*0.6);
        }
    }
    return 0;
}