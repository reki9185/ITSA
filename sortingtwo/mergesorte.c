#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "mergesorte.h"

void merge(char*a[],long long left,long long right,long long mid){
	long long i=left,j=mid,k=0;
	char*result[right-left+5];
	while(i<mid&&j<right){
		if(strcmp(a[i],a[j])<=0){
			result[k]=strdup(a[i]);
			k++;
			i++;
		}else{
			result[k]=strdup(a[j]);	
			k++;
			j++;
		}
	}
	while(i<mid){
		result[k]=strdup(a[i]);
		k++;
		i++;
	}
	while(j<right){
		result[k]=strdup(a[j]);
		k++;
		j++;
	}
	for(long long x=left,y=0;x<right;x++,y++){
		a[x]=result[y];
	}
}

void mymergesort(char*a[],long long left,long long right,long long cnt){
	if(cnt<2){
		return;
	}
	long long mid=(left+right)/2;
	mymergesort(a,left,mid,mid-left);
	mymergesort(a,mid,right,right-mid);
	merge(a,left,right,mid);
}
