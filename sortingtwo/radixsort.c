#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "radixsort.h"

void myradixsort(int a[],long long cnt){
	int tmp[10][5000010]={0};
	long long order[10]={0};
	long long k=0;
	int number;
	int lsd;
	for(long long n=1;n<10000000000;n*=10){
		for(long long i=0;i<cnt;i++){
			number=a[i]/n;
			lsd=number%10;
			tmp[lsd][order[lsd]]=a[i];
			order[lsd]++;
		}
		k=0;
		for(int i=0;i<10;i++){
			if(order[i]!=0){
				for(long long j=0;j<order[i];j++){
					a[k]=tmp[i][j];
					k++;
				}
			}
			order[i]=0;
		}
	}
}
