#include <stdio.h>
#include <string.h>

int main(){
    char line[10];
    char special[10];
    char*top[3];
    int a[10];
    int b[10];
    int num;
    int m[10];
    long long sum=0;
    char tmp;
    m[1]=200000;
    m[2]=40000;
    m[3]=10000;
    m[4]=4000;
    m[5]=1000;
    m[6]=200;
    scanf("%s",special);
    for(int i=0;i<3;i++){
        scanf("%s",line);
        top[i]=strdup(line);
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            tmp=top[i][j];
            top[i][j]=top[i][7-j];
            top[i][7-j]=tmp;
        }
    }
    for(int i=0;i<10;i++){
        a[i]=0;
    }
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%s",line);
        if(strcmp(line,special)==0){
            a[0]++;
            sum+=2000000;
            continue;
        }
        for(int i=0;i<4;i++){
            tmp=line[i];
            line[i]=line[7-i];
            line[7-i]=tmp;
        }
        for(int j=0;j<10;j++){
            b[j]=0;
        }
        for(int i=0;i<3;i++){
            if(strcmp(line,top[i])==0){
                b[1]++;
            }else if(strncmp(line,top[i],7)==0){
                b[2]++;
            }else if(strncmp(line,top[i],6)==0){
                b[3]++;
            }else if(strncmp(line,top[i],5)==0){
                b[4]++;
            }else if(strncmp(line,top[i],4)==0){
                b[5]++;
            }else if(strncmp(line,top[i],3)==0){
                b[6]++;
            }
        }
        for(int i=0;i<10;i++){
            if(b[i]>0){
                a[i]++;
                sum+=m[i];
                break;
            }
        }
    }
    printf("%d %d %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
    printf("%lld\n",sum);
    return 0;
}