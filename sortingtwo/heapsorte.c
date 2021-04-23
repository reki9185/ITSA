#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "heapsorte.h"

void adjust(char*a[],long long idx,long long cnt){
	char*tmp;
	long long max;
	long long left=idx*2+1;
	long long right=idx*2+2;
	if(left<cnt&&strcmp(a[left],a[idx])>0){
		max=left;
	}else{
		max=idx;
	}
	if(right<cnt&&strcmp(a[right],a[max])>0){
		max=right;
	}
	if(max!=idx){
		tmp=a[max];
		a[max]=a[idx];
		a[idx]=tmp;
		adjust(a,max,cnt);
	}
}

void buildTree(char*a[],long long cnt){
	for(long long i=cnt/2-1;i>=0;i--){
		adjust(a,i,cnt);
	}
}

void myheapsort(char*a[],long long cnt){
	char*tmp;
	buildTree(a,cnt);
	for(long long i=cnt-1;i>0;i--){
		tmp=a[0];
		a[0]=a[i];
		a[i]=tmp;
		cnt--;
		adjust(a,0,cnt);
	}
}
