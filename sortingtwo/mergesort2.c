#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "mergesort2.h"

void insertionsort(int a[],long long cnt){
	int tmp;
	for(long long i=1;i<cnt;i++){
		tmp=a[i];
		for(long long j=i-1;j>=0;j--){
			if(tmp<a[j]){
				a[j+1]=a[j];
				a[j]=tmp;
			}
		}
	}
}

void merge2(int a[],int left[],long long leftCnt,int right[],long long rightCnt){
	long long i=0,j=0,k=0;
	while(i<leftCnt&&j<rightCnt){
		if(left[i]<right[j]){
			a[k]=left[i];
			k++;
			i++;
		}else{
			a[k]=right[j];
			k++;
			j++;
		}
	}
	while(i<leftCnt){
		a[k]=left[i];
		k++;
		i++;
	}
	while(j<rightCnt){
		a[k]=right[j];
		k++;
		j++;
	}
}

void mymergesort2(int a[],long long cnt){
	if(cnt<15){
		insertionsort(a,cnt);
		return;
	}
	long long mid=cnt/2;
	int left[mid],right[cnt-mid];
	for(long long i=0;i<mid;i++){
		left[i]=a[i];
	}
	for(long long i=mid;i<cnt;i++){
		right[i-mid]=a[i];
	}
	mymergesort2(left,mid);
	mymergesort2(right,cnt-mid);
	merge2(a,left,mid,right,cnt-mid);
}
