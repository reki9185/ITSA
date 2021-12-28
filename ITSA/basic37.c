#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==b&&b==c&&c==d){
        printf("WIN\n");
    }else if(a==b){
        if(a==c||a==d){
            printf("R\n");
        }else if(c==d){
            if(a>c){
                printf("%d\n",a*2);
            }else{
                printf("%d\n",c*2);
            }
        }else{
            printf("%d\n",c+d);
        }
    }else if(b==c){
        if(b==a||b==d){
            printf("R\n");
        }else if(a==d){
            if(b>a){
                printf("%d\n",b*2);
            }else{
                printf("%d\n",a*2);
            }
        }else{
            printf("%d\n",a+d);
        }
    }else if(c==d){
        if(c==a||c==b){
            printf("R\n");
        }else if(a==b){
            if(c>a){
                printf("%d\n",c*2);
            }else{
                printf("%d\n",a*2);
            }
        }else{
            printf("%d\n",a+b);
        }
    }else if(a==c){
        if(a==b||a==d){
            printf("R\n");
        }else if(b==d){
            if(a>b){
                printf("%d\n",a*2);
            }else{
                printf("%d\n",b*2);
            }
        }else{
            printf("%d\n",b+d);
        }
    }else if(b==d){
        if(b==a||b==c){
            printf("R\n");
        }else if(a==c){
            if(b>a){
                printf("%d\n",b*2);
            }else{
                printf("%d\n",a*2);
            }
        }else{
            printf("%d\n",a+c);
        }
    }else if(a==d){
        if(a==c||a==b){
            printf("R\n");
        }else if(b==c){
            if(a>b){
                printf("%d\n",a*2);
            }else{
                printf("%d\n",b*2);
            }
        }else{
            printf("%d\n",b+c);
        }
    }else{
        printf("R\n");
    }
    return 0;
}