#include <stdio.h>

int main(){
    int num;
    char c;
    int a1,b1,a2,b2;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%c",&c);
        while(c!='+'&&c!='-'&&c!='*'){
            scanf("%c",&c);
        }
        scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
        if(c=='+'){
            printf("%d %d\n",(a1+a2),(b1+b2));
        }else if(c=='-'){
            printf("%d %d\n",(a1-a2),(b1-b2));
        }else{
            printf("%d %d\n",(a1*a2-b1*b2),(a1*b2)+(a2*b1));
        }
    }
    return 0;
}