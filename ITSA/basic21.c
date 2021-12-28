#include <stdio.h>

int main(){
    float a[10];
    float max=0,min=100000000;
    for(int i=0;i<10;i++){
        scanf("%f",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("maximum:%.2lf\n",max);
    printf("minimum:%.2lf\n",min);
    return 0;
}