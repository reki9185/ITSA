#include <stdio.h>

int main(){
    int num;
    int sum=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}