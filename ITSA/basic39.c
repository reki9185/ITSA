#include <stdio.h>

int main(){
    int a,b,c;
    int sum;
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d%d%d",&a,&b,&c);
        sum=a+b+c;
        if(a>=60&&b>=60&&c>=60){
            printf("P\n");
        }else if((a<60&&b>=60&&c>=60)||(a>=60&&b<60&&c>=60)||(a>=60&&b>=60&&c<60)){
            if(sum>=220){
                printf("P\n");
            }else{
                printf("M\n");
            }
        }else if((a<60&&b<60&&c>=80)||(a<60&&b>=80&&c<60)||(a>=80&&b<60&&c<80)){
            printf("M\n");
        }else{
            printf("F\n");
        }
    }
    return 0;
}