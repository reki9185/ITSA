#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "mergesort.h"

void merge(int a[],int left[],long long leftCnt,int right[],long long rightCnt){
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

void mymergesort(int a[],long long cnt){
	if(cnt<2){
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
	mymergesort(left,mid);
	mymergesort(right,cnt-mid);
	merge(a,left,mid,right,cnt-mid);
}
