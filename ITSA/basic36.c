#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    if(num%4==0){
        if(num%100==0){
            if(num%400==0){
                printf("Bissextile Year\n");
            }else{
                printf("Common Year\n");
            }
        }else{
            printf("Bissextile Year\n");
        }
    }else{
        printf("Common Year\n");
    }
    return 0;
}