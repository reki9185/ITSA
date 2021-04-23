#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "heapsort.h"
void swap3(int*a,int*b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

void adjust(int a[],long long idx,long long cnt){
	long long max;
	long long left=idx*2+1;
	long long right=idx*2+2;
	if(left<cnt&&a[left]>a[idx]){
		max=left;
	}else{
		max=idx;
	}
	if(right<cnt&&a[right]>a[max]){
		max=right;
	}
	if(max!=idx){
		swap3(&a[max],&a[idx]);
		adjust(a,max,cnt);
	}
}

void buildTree(int a[],long long cnt){
	for(long long i=cnt/2-1;i>=0;i--){
		adjust(a,i,cnt);
	}
}

void myheapsort(int a[],long long cnt){
	buildTree(a,cnt);
	for(long long i=cnt-1;i>0;i--){
		swap3(&a[0],&a[i]);
		cnt--;
		adjust(a,0,cnt);
	}
}
