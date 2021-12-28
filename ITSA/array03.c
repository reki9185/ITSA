#include <stdio.h>

int main(){
    int num;
    long long sum=0;
    for(int i=0;i<6;i++){
        scanf("%d",&num);
        sum+=num*num*num;
    }
    printf("%lld\n",sum);
    return 0;
}