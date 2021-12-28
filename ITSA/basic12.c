#include <stdio.h>

int r(int num){
    if(num==0||num==1){
        return (num+1);
    }
    return r(num-1)+r(num/2);
}

int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",r(num));
    return 0;
}