#include <stdio.h>

int main(){
    int s[40];
    int b[40];
    int num;
    int cnt=0;
    int car[40];
    int flag;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d%d",&s[i],&b[i]);
    }
    for(int i=0;i<num;i++){
        flag=0;
        for(int j=0;j<cnt;j++){
            if(s[i]>=car[j]){
                car[j]=b[i];
                flag=1;
                break;
            }
        }
        if(flag==0){
            car[cnt]=b[i];
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}