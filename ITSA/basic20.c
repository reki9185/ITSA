#include <stdio.h>
#include <string.h>

int main(){
    char str1[48];
    char str2[48];
    int str[48];
    char tmp;
    int num;
    int len1;
    int len2;
    int t;
    scanf("%d",&num);
    for(int j=0;j<num;j++){
        scanf("%s",str1);
        scanf("%s",str2);
        len1=strlen(str1);
        len2=strlen(str2);
        for(int i=0;i<len1/2;i++){
            tmp=str1[i];
            str1[i]=str1[len1-1-i];
            str1[len1-1-i]=tmp;
        }
        for(int i=0;i<len2/2;i++){
            tmp=str2[i];
            str2[i]=str2[len2-1-i];
            str2[len2-1-i]=tmp;
        }
        if(len1>len2){
            for(int i=0;i<len2;i++){
                str[i]=(str1[i]-'0')+(str2[i]-'0');
                t=i;
            }
            for(int i=t;i<len1;i++){
                str[i+1]=str1[i+1]-'0';
                t++;
            }
        }else{
            for(int i=0;i<len1;i++){
                str[i]=(str1[i]-'0')+(str2[i]-'0');
                t=i;
            }
            for(int i=t;i<len2;i++){
                str[i+1]=str2[i+1]-'0';
                t++;
            }
        }
        for(int i=0;i<t-1;i++){
            if(str[i]>9){
                str[i+1]++;
                str[i]-=10;
            }
        }
        if(str[t-1]>9){
            str[t-1]-=10;
            str[t]=1;
            t++;
        }
        for(int i=t-1;i>=0;i--){
            printf("%d",str[i]);
        }
        printf("\n");
    }
    return 0;
}