#include <stdio.h>

int main(){
    int num;
    int flag=0;
    scanf("%d",&num);
    if(num==1){
        printf("NO\n");
    }else if(num==2){
        printf("YES\n");
    }else{
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}