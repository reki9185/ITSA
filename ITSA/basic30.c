#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if((a==1&&b>=21)||(a==2&&b<=18)){
        printf("Aquarius\n");
    }else if((a==2&&b>=19)||(a==3&&b<=20)){
        printf("Pisces\n");
    }else if((a==3&&b>=21)||(a==4&&b<=20)){
        printf("Aries\n");
    }else if((a==4&&b>=21)||(a==5&&b<=21)){
        printf("Taurus\n");
    }else if((a==5&&b>=22)||(a==6&&b<=21)){
        printf("Gemini\n");
    }else if((a==6&&b>=22)||(a==7&&b<=22)){
        printf("Cancer\n");
    }else if((a==7&&b>=23)||(a==8&&b<=23)){
        printf("Leo\n");
    }else if((a==8&&b>=24)||(a==9&&b<=23)){
        printf("Virgo\n");
    }else if((a==9&&b>=24)||(a==10&&b<=23)){
        printf("Libra\n");
    }else if((a==10&&b>=24)||(a==11&&b<=22)){
        printf("Scorpio\n");
    }else if((a==11&&b>=23)||(a==12&&b<=21)){
        printf("Sagittarius\n");
    }else{
        printf("Capricorn\n");
    }
    return 0;
}