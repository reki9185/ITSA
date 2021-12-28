#include <stdio.h>

int main(){
    int t1,m1,t2,m2;
    int sum=0;
    int tmp;
    scanf("%d%d%d%d",&t1,&m1,&t2,&m2);
    if(m2<m1){
        m2+=60;
        t2--;
    }
    tmp=(t2-t1)*60+(m2-m1);
    if(tmp<=120){
        sum+=(tmp/30)*30;
    }else{
        sum+=120;
        if(tmp<240){
            sum+=((tmp-120)/30)*40;
        }else{
            sum+=160+((tmp-240)/30)*60;
        }
    }
    printf("%d\n",sum);
    return 0;
}