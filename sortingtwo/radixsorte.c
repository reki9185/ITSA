#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <string.h>
#include "radixsorte.h"

char*tmp[52][1000010];
long long order[52];

void myradixsorte(char*a[],long long cnt){
	long long k=0;
	char c;
	int lsd;
	for(int n=99;n>=0;n--){
		for(long long i=0;i<cnt;i++){
			c=a[i][n];
			lsd=c-'a';
			tmp[lsd][order[lsd]]=(char*)malloc(105);
			strcpy(tmp[lsd][order[lsd]],a[i]);
			order[lsd]++;
		}
		k=0;
		for(int i=0;i<52;i++){
			if(order[i]!=0){
				for(long long j=0;j<order[i];j++){
					strcpy(a[k],tmp[i][j]);
					k++;
					free(tmp[i][j]);
				}
			}
			order[i]=0;
		}
	}
}

char*a[1000010];
int main(){
	char line[1024];
	long long cnt=0;
	while(scanf("%s",line)!=EOF){
		a[cnt]=strdup(line);
		cnt++;
	}
	myradixsorte(a,cnt);
	for(long long i=0;i<cnt;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}
