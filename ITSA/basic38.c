#include <stdio.h>

int main(){
    int num;
    double sum=0,summer=0;
    scanf("%d",&num);
    if(num<=120){
        summer+=(double)num*2.1;
        sum+=(double)num*2.1;
    }else{
        summer+=120.0*2.1;
        sum+=120.0*2.1;
        if(num<=330){
            summer+=(double)(num-120)*3.02;
            sum+=(double)(num-120)*2.68;
        }else{
            summer+=(330-120)*3.02;
            sum+=(330-120)*2.68;
            if(num<=500){
                summer+=(double)(num-330)*4.39;
                sum+=(double)(num-330)*3.61;
            }else{
                summer+=(500-330)*4.39;
                sum+=(500-330)*3.61;
                if(num<=700){
                    summer+=(double)(num-500)*4.97;
                    sum+=(double)(num-500)*4.01;
                }else{
                    summer+=(700-500)*4.97+(double)(num-700)*5.63;
                    sum+=(700-500)*4.01+(double)(num-700)*4.50;
                }
            }
        }
    }
    printf("Summer months:%.2f\n",summer);
    printf("Non-Summer months:%.2f\n",sum);
    return 0;
}